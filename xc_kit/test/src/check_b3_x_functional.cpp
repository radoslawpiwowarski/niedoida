/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/floating_point_comparison.hpp>
#include <boost/test/test_tools.hpp>    
#include <boost/test/unit_test.hpp>

#include "xc_kit/xc_functionals.hpp"
    
void check_b3_x_functional()
{
    const double eps = 1e-7;
    XCFunctionalData xc;
    xc = b3_x_functional(0.17E+01, 0.17E+01, 0.81E-11, 0.81E-11, 0.81E-11, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.302074176669E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.118460461439E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.118460461439E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.149044707244E-02, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.149044707244E-02, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.232275414586E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.232275414586E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.116897809603E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.116897809603E-02, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.182480573750E-04, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.182480573750E-04, eps);
    xc = b3_x_functional(0.17E+01, 0.17E+01, 0.17E+01, 0.17E+01, 0.17E+01, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.302576011683E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.118267279151E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.118267279151E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.146242624806E-02, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.146242624806E-02, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.234848407273E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.234848407273E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.110691805753E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.110691805753E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.150310955024E-04, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.150310955024E-04, eps);
    xc = b3_x_functional(0.15E+01, 0.15E+01, 0.36E+02, 0.36E+02, 0.36E+02, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.266455099619E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.109870446379E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.109870446379E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.133656911577E-02, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.133656911577E-02, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.292857133090E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.292857133090E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.760946649716E-03, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.760946649716E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.667366853939E-05, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.667366853939E-05, eps);
    xc = b3_x_functional(0.88E-01, 0.88E-01, 0.87E-01, 0.87E-01, 0.87E-01, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.671436607665E-01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.405516107933E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.405516107933E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.391250991935E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.391250991935E-01, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.199114282580E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.199114282580E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.172622985744E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.172622985744E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.159379207669E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.159379207669E+00, eps);
    xc = b3_x_functional(0.18E+04, 0.18E+04, 0.55E+00, 0.55E+00, 0.55E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.325995580257E+05, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.120739103798E+02, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.120739103798E+02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.138107876155E-06, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.138107876155E-06, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.223590932967E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.223590932967E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.102302130473E-09, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.102302130473E-09, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.145185185089E-16, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.145185185089E-16, eps);
    xc = b3_x_functional(0.18E+04, 0.18E+04, 0.86E+04, 0.86E+04, 0.86E+04, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.325995604011E+05, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.120739095001E+02, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.120739095001E+02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.138107751304E-06, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.138107751304E-06, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.223591047008E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.223591047008E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.102301853028E-09, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.102301853028E-09, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.145183686163E-16, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.145183686163E-16, eps);
    xc = b3_x_functional(0.16E+04, 0.16E+04, 0.37E+10, 0.37E+10, 0.37E+10, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.288968766601E+05, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.112649341776E+02, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.112649341776E+02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.125745583369E-06, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.125745583369E-06, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.277801508519E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.277801508519E-02, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.699168321386E-10, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.699168321386E-10, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.565478173007E-17, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.565478173007E-17, eps);
    xc = b3_x_functional(0.26E+00, 0.26E+00, 0.28E+00, 0.28E+00, 0.28E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.255933610761E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.615258901934E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.615258901934E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.142702133990E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.142702133990E-01, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.930457319354E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.930457319354E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.493293781976E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.493293781976E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.830532973290E-02, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.830532973290E-02, eps);
    xc = b3_x_functional(0.53E+05, 0.53E+05, 0.96E+05, 0.96E+05, 0.96E+05, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.296403184143E+07, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.372834193818E+02, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.372834193818E+02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.151896334404E-08, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.151896334404E-08, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.234486914535E-03, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.234486914535E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.382129142221E-13, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.382129142221E-13, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.193156282710E-22, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.193156282710E-22, eps);
    xc = b3_x_functional(0.47E+05, 0.47E+05, 0.29E+14, 0.29E+14, 0.29E+14, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.261522895352E+07, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.347950052630E+02, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.347950052630E+02, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.139811278004E-08, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.139811278004E-08, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.290863996453E-03, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.290863996453E-03, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.267966303316E-13, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.267966303316E-13, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.781950966986E-23, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.781950966986E-23, eps);
    xc = b3_x_functional(0.15E+00, 0.15E+00, 0.16E+00, 0.16E+00, 0.16E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.128050496620E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.499099969785E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.499099969785E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.246140678420E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.246140678420E-01, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.141273769124E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.141273769124E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.106743743182E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.106743743182E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.393918647938E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.393918647938E-01, eps);
    xc = b3_x_functional(0.35E+01, 0.00E+00, 0.46E-10, 0.00E+00, 0.00E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.395587386466E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.150699956749E+01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.569059565191E-03, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.143523768332E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.101564081636E-05, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = b3_x_functional(0.35E+01, 0.00E+00, 0.34E+01, 0.00E+00, 0.00E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.395780292571E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.150626896808E+01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.565718309854E-03, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.144006077697E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.951896165997E-06, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = b3_x_functional(0.30E+01, 0.00E+00, 0.20E+03, 0.00E+00, 0.00E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.334178623233E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.138873033025E+01, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.542857473158E-03, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.182836181283E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.454347701768E-06, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = b3_x_functional(0.58E-01, 0.00E+00, 0.47E-01, 0.00E+00, 0.00E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.203912167422E-01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.346971018085E+00, eps);
    BOOST_CHECK_SMALL(xc.de_drb, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.563614622931E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_SMALL(xc.de_dgbb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.247178395415E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbrb, eps);
    //BOOST_CHECK_SMALL(xc.d2e_dragaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgbb, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.497289960388E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgbb, eps);
    xc = b3_x_functional(0.82E+02, 0.81E+02, 0.49E+07, 0.49E+07, 0.49E+07, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.585995573636E+03, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.401859492758E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.399728960093E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.488348741587E-05, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.491412914880E-05, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.212240823155E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.213865934354E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.306767684191E-07, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.306033827518E-07, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.305802669194E-12, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.311732004758E-12, eps);
    xc = b3_x_functional(0.39E+02, 0.38E+02, 0.81E+06, 0.82E+06, 0.82E+06, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.219506729397E+03, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.311545164526E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.307912485414E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.124152824173E-04, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.125072883621E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.346596391020E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.351288556799E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.145019464457E-06, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.141092178868E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.504534758146E-11, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.517448857581E-11, eps);
    xc = b3_x_functional(0.13E+00, 0.95E-01, 0.15E+00, 0.18E+00, 0.22E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.946797588704E-01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.470500122121E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.406494049878E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.273044067556E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.264817588254E-01, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.156231868416E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.169747964699E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.115670137252E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.439134372248E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.534218945785E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.530748327798E-01, eps);
    xc = b3_x_functional(0.78E-01, 0.31E-01, 0.41E-02, 0.38E-02, 0.36E-02, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.332104664928E-01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.418753074278E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.290758020877E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.805291957857E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.179576146756E+00, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.194797664651E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.406034811912E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.113028844528E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.301577618754E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.175699045569E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.152026875550E+02, eps);
    xc = b3_x_functional(0.50E+02, 0.49E+02, 0.11E+06, 0.11E+06, 0.11E+06, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.274047538305E+03, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.361556634502E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.358932643005E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.147330548701E-04, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.150671908665E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.260293938627E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.264533398562E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.328230379980E-06, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.340130146375E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.110200710038E-10, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.116700363054E-10, eps);
    xc = b3_x_functional(0.40E+02, 0.40E+02, 0.99E+05, 0.98E+05, 0.98E+05, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.207663441185E+03, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.333648288231E+01, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.333697320407E+01, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.189227315374E-04, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.189441721893E-04, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.310354619100E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.310161942909E-01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.489611801624E-06, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.491033304643E-06, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.213857448925E-10, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.214957808672E-10, eps);
    xc = b3_x_functional(0.12E+00, 0.10E+00, 0.12E+00, 0.13E+00, 0.14E+00, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.889357400635E-01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.458276451029E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.421089939296E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.304660126238E-01, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.314188249786E-01, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.164795242182E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.180699779089E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.140610855026E+00, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.108044105332E+00, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.742126486309E-01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.832697038526E-01, eps);
    xc = b3_x_functional(0.48E-01, 0.25E-01, 0.46E-02, 0.44E-02, 0.41E-02, 2);
    //BOOST_CHECK_CLOSE(xc.e, -0.201295891468E-01, eps);
    //BOOST_CHECK_CLOSE(xc.de_dra, -0.346856552295E+00, eps);
    //BOOST_CHECK_CLOSE(xc.de_drb, -0.263736187451E+00, eps);
    BOOST_CHECK_CLOSE(xc.de_dgaa, -0.126327666452E+00, eps);
    BOOST_CHECK_SMALL(xc.de_dgab, eps);
    BOOST_CHECK_CLOSE(xc.de_dgbb, -0.187254294890E+00, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drara, -0.294556840402E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_drarb, eps);
    //BOOST_CHECK_CLOSE(xc.d2e_drbrb, -0.446555476944E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dragaa, 0.210068744249E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dragbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgaa, eps);
    BOOST_CHECK_SMALL(xc.d2e_drbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_drbgbb, 0.217013476395E+01, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgaagaa, 0.551118679586E+01, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgaagbb, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgabgab, eps);
    BOOST_CHECK_SMALL(xc.d2e_dgbbgab, eps);
    BOOST_CHECK_CLOSE(xc.d2e_dgbbgbb, 0.178736912276E+02, eps);
}

