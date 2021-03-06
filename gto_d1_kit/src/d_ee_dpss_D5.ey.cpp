/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_dpss_D(const unsigned Al,
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
    if (Al == 2 && Cl == 1) {
        eri_gradient_2010_4(ae,
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

    double ax[5 * 3 * 1 * 1] = {0};
    double ay[5 * 3 * 1 * 1] = {0};
    double az[5 * 3 * 1 * 1] = {0};

    if (Al == 2 && Dl == 1) {
        two_electrons_gradient_dpss_C(Al,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((i * 1 + j) * 1 + l) * 3 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Bl == 2 && Cl == 1) {
        two_electrons_gradient_dpss_D(Bl,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 3 + k) * 1 + l;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Bl == 2 && Dl == 1) {
        two_electrons_gradient_dpss_C(Bl,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 1 + l) * 3 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 1 && Cl == 2) {
        two_electrons_gradient_dpss_B(Cl,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 5 + i) * 1 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 1 && Dl == 2) {
        two_electrons_gradient_dpss_A(Dl,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 1 + j) * 5 + i;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Bl == 1 && Cl == 2) {
        two_electrons_gradient_dpss_B(Cl,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((l * 3 + k) * 5 + i) * 1 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Bl == 1 && Dl == 2) {
        two_electrons_gradient_dpss_A(Dl,
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
            for (int j = 0; j < 1; ++j)
                for (int k = 0; k < 3; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 1 + j) * 3 + k) * 1 + l;
                        const int q = ((l * 3 + k) * 1 + j) * 5 + i;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 2 && Bl == 1) {
        two_electrons_gradient_dpss_C(Al,
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
                for (int k = 0; k < 1; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 1 + k) * 1 + l;
                        const int q = ((i * 3 + j) * 1 + l) * 1 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Al == 1 && Bl == 2) {
        two_electrons_gradient_dpss_C(Bl,
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
                for (int k = 0; k < 1; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 1 + k) * 1 + l;
                        const int q = ((j * 5 + i) * 1 + l) * 1 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Cl == 2 && Dl == 1) {
        two_electrons_gradient_dpss_B(Cl,
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
                for (int k = 0; k < 1; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 1 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 5 + i) * 3 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }

    if (Cl == 1 && Dl == 2) {
        two_electrons_gradient_dpss_A(Dl,
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
                for (int k = 0; k < 1; ++k)
                    for (int l = 0; l < 1; ++l) {
                        const int p = ((i * 3 + j) * 1 + k) * 1 + l;
                        const int q = ((k * 1 + l) * 3 + j) * 5 + i;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }
        return;
    }
}
