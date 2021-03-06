/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_ddps_B(const unsigned Al,
                                   const unsigned Bl,
                                   const unsigned Cl,
                                   const unsigned Dl,
                                   const double ae,
                                   const double xA,
                                   const double yA,
                                   const double zA,
                                   const double be,
                                   const double xB,
                                   const double yB,
                                   const double zB,
                                   const double ce,
                                   const double xC,
                                   const double yC,
                                   const double zC,
                                   const double de,
                                   const double xD,
                                   const double yD,
                                   const double zD,
                                   const double* const bs,
                                   double* const gx,
                                   double* const gy,
                                   double* const gz)
{
    if (Bl == 1 && Dl == 0) {
        eri_gradient_2120_2(ae,
                            xA,
                            yA,
                            zA,
                            be,
                            xB,
                            yB,
                            zB,
                            ce,
                            xC,
                            yC,
                            zC,
                            de,
                            xD,
                            yD,
                            zD,
                            bs,
                            gx,
                            gy,
                            gz);
        return;
    }

    double ax[5 * 5 * 3 * 1] = {0};
    double ay[5 * 5 * 3 * 1] = {0};
    double az[5 * 5 * 3 * 1] = {0};

    if (Bl == 1 && Cl == 0) {
        two_electrons_gradient_ddps_B(Al,
                                      Bl,
                                      Dl,
                                      Cl,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((i * 3 + j) * 1 + l) * 5 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 1 && Dl == 0) {
        two_electrons_gradient_ddps_A(Bl,
                                      Al,
                                      Cl,
                                      Dl,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 5 + k) * 1 + l;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 1 && Cl == 0) {
        two_electrons_gradient_ddps_A(Bl,
                                      Al,
                                      Dl,
                                      Cl,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 1 + l) * 5 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Bl == 0 && Dl == 1) {
        two_electrons_gradient_ddps_D(Cl,
                                      Dl,
                                      Al,
                                      Bl,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 5 + i) * 3 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Bl == 0 && Cl == 1) {
        two_electrons_gradient_ddps_D(Dl,
                                      Cl,
                                      Al,
                                      Bl,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 3 + j) * 5 + i;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 0 && Dl == 1) {
        two_electrons_gradient_ddps_C(Cl,
                                      Dl,
                                      Bl,
                                      Al,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((l * 5 + k) * 5 + i) * 3 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 0 && Cl == 1) {
        two_electrons_gradient_ddps_C(Dl,
                                      Cl,
                                      Bl,
                                      Al,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 5 + k) * 1 + l;
                        const int q = ((l * 5 + k) * 3 + j) * 5 + i;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Cl == 1 && Dl == 0) {
        two_electrons_gradient_ddps_A(Bl,
                                      Al,
                                      Cl,
                                      Dl,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 5 + j) * 3 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 3 + k) * 1 + l;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Cl == 0 && Dl == 1) {
        two_electrons_gradient_ddps_A(Bl,
                                      Al,
                                      Dl,
                                      Cl,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 5 + j) * 3 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 1 + l) * 3 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 1 && Bl == 0) {
        two_electrons_gradient_ddps_D(Cl,
                                      Dl,
                                      Al,
                                      Bl,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 5 + j) * 3 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 5 + i) * 5 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 0 && Bl == 1) {
        two_electrons_gradient_ddps_C(Cl,
                                      Dl,
                                      Bl,
                                      Al,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      bs,
                                      ax,
                                      ay,
                                      az);

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 5 + j) * 3 + k) * 1 + l;
                        const int q = ((l * 3 + k) * 5 + i) * 5 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }
}
