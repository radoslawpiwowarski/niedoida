/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_3_hr(const double ae,
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
                            const double* const g,
                            const double* const etx,
                            const double* const ety,
                            const double* const etz,
                            double* const hrx,
                            double* const hry,
                            double* const hrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double C595 = etx[0];
    const double C596 = etx[1];
    const double C604 = etx[2];
    const double C612 = etx[3];
    const double C613 = etx[4];
    const double C628 = etx[5];
    const double C629 = etx[6];
    const double C644 = etx[7];
    const double C652 = etx[8];
    const double C660 = etx[9];
    const double C668 = etx[10];
    const double C676 = etx[11];
    const double C684 = etx[12];
    const double C685 = etx[13];
    const double C700 = etx[14];
    const double C701 = etx[15];
    const double C716 = etx[16];
    const double C724 = etx[17];
    const double C732 = etx[18];
    const double C740 = etx[19];
    const double C748 = etx[20];
    const double C756 = etx[21];
    const double C771 = etx[22];
    const double C772 = etx[23];
    const double C787 = etx[24];
    const double C795 = etx[25];
    const double C803 = etx[26];
    const double C818 = etx[27];
    const double C833 = etx[28];
    const double C855 = etx[29];
    const double C898 = etx[30];
    const double C1222 = ety[0];
    const double C1223 = ety[1];
    const double C1231 = ety[2];
    const double C1239 = ety[3];
    const double C1240 = ety[4];
    const double C1255 = ety[5];
    const double C1256 = ety[6];
    const double C1271 = ety[7];
    const double C1279 = ety[8];
    const double C1287 = ety[9];
    const double C1295 = ety[10];
    const double C1303 = ety[11];
    const double C1311 = ety[12];
    const double C1312 = ety[13];
    const double C1327 = ety[14];
    const double C1328 = ety[15];
    const double C1343 = ety[16];
    const double C1351 = ety[17];
    const double C1359 = ety[18];
    const double C1367 = ety[19];
    const double C1375 = ety[20];
    const double C1383 = ety[21];
    const double C1398 = ety[22];
    const double C1399 = ety[23];
    const double C1414 = ety[24];
    const double C1422 = ety[25];
    const double C1430 = ety[26];
    const double C1445 = ety[27];
    const double C1460 = ety[28];
    const double C1482 = ety[29];
    const double C1525 = ety[30];
    const double C1849 = etz[0];
    const double C1850 = etz[1];
    const double C1858 = etz[2];
    const double C1866 = etz[3];
    const double C1867 = etz[4];
    const double C1882 = etz[5];
    const double C1883 = etz[6];
    const double C1898 = etz[7];
    const double C1906 = etz[8];
    const double C1914 = etz[9];
    const double C1922 = etz[10];
    const double C1930 = etz[11];
    const double C1938 = etz[12];
    const double C1939 = etz[13];
    const double C1954 = etz[14];
    const double C1955 = etz[15];
    const double C1970 = etz[16];
    const double C1978 = etz[17];
    const double C1986 = etz[18];
    const double C1994 = etz[19];
    const double C2002 = etz[20];
    const double C2010 = etz[21];
    const double C2025 = etz[22];
    const double C2026 = etz[23];
    const double C2041 = etz[24];
    const double C2049 = etz[25];
    const double C2057 = etz[26];
    const double C2072 = etz[27];
    const double C2087 = etz[28];
    const double C2109 = etz[29];
    const double C2152 = etz[30];
    const double C300 = C595 + xAB * C596;
    const double C301 = C596 + xAB * C604;
    const double C309 = C612 + yAB * C613;
    const double C310 = C613 + yAB * C604;
    const double C318 = C628 + zAB * C629;
    const double C319 = C629 + zAB * C604;
    const double C327 = C644 + yAB * C596;
    const double C335 = C652 + zAB * C596;
    const double C343 = C660 + zAB * C613;
    const double C351 = C612 + xAB * C668;
    const double C352 = C668 + xAB * C676;
    const double C360 = C684 + yAB * C685;
    const double C361 = C685 + yAB * C676;
    const double C369 = C700 + zAB * C701;
    const double C370 = C701 + zAB * C676;
    const double C378 = C716 + yAB * C668;
    const double C386 = C724 + zAB * C668;
    const double C394 = C732 + zAB * C685;
    const double C402 = C628 + xAB * C740;
    const double C403 = C740 + xAB * C748;
    const double C411 = C700 + yAB * C756;
    const double C412 = C756 + yAB * C748;
    const double C420 = C771 + zAB * C772;
    const double C421 = C772 + zAB * C748;
    const double C429 = C787 + yAB * C740;
    const double C437 = C795 + zAB * C740;
    const double C445 = C803 + zAB * C756;
    const double C453 = C644 + xAB * C613;
    const double C454 = C613 + xAB * C818;
    const double C462 = C668 + yAB * C818;
    const double C470 = C787 + zAB * C833;
    const double C471 = C833 + zAB * C818;
    const double C500 = C652 + xAB * C629;
    const double C501 = C629 + xAB * C855;
    const double C509 = C724 + yAB * C833;
    const double C510 = C833 + yAB * C855;
    const double C518 = C740 + zAB * C855;
    const double C526 = C660 + yAB * C629;
    const double C548 = C660 + xAB * C833;
    const double C549 = C833 + xAB * C898;
    const double C557 = C732 + yAB * C701;
    const double C558 = C701 + yAB * C898;
    const double C566 = C756 + zAB * C898;
    const double C927 = C1222 + xAB * C1223;
    const double C928 = C1223 + xAB * C1231;
    const double C936 = C1239 + yAB * C1240;
    const double C937 = C1240 + yAB * C1231;
    const double C945 = C1255 + zAB * C1256;
    const double C946 = C1256 + zAB * C1231;
    const double C954 = C1271 + yAB * C1223;
    const double C962 = C1279 + zAB * C1223;
    const double C970 = C1287 + zAB * C1240;
    const double C978 = C1239 + xAB * C1295;
    const double C979 = C1295 + xAB * C1303;
    const double C987 = C1311 + yAB * C1312;
    const double C988 = C1312 + yAB * C1303;
    const double C996 = C1327 + zAB * C1328;
    const double C997 = C1328 + zAB * C1303;
    const double C1005 = C1343 + yAB * C1295;
    const double C1013 = C1351 + zAB * C1295;
    const double C1021 = C1359 + zAB * C1312;
    const double C1029 = C1255 + xAB * C1367;
    const double C1030 = C1367 + xAB * C1375;
    const double C1038 = C1327 + yAB * C1383;
    const double C1039 = C1383 + yAB * C1375;
    const double C1047 = C1398 + zAB * C1399;
    const double C1048 = C1399 + zAB * C1375;
    const double C1056 = C1414 + yAB * C1367;
    const double C1064 = C1422 + zAB * C1367;
    const double C1072 = C1430 + zAB * C1383;
    const double C1080 = C1271 + xAB * C1240;
    const double C1081 = C1240 + xAB * C1445;
    const double C1089 = C1295 + yAB * C1445;
    const double C1097 = C1414 + zAB * C1460;
    const double C1098 = C1460 + zAB * C1445;
    const double C1127 = C1279 + xAB * C1256;
    const double C1128 = C1256 + xAB * C1482;
    const double C1136 = C1351 + yAB * C1460;
    const double C1137 = C1460 + yAB * C1482;
    const double C1145 = C1367 + zAB * C1482;
    const double C1153 = C1287 + yAB * C1256;
    const double C1175 = C1287 + xAB * C1460;
    const double C1176 = C1460 + xAB * C1525;
    const double C1184 = C1359 + yAB * C1328;
    const double C1185 = C1328 + yAB * C1525;
    const double C1193 = C1383 + zAB * C1525;
    const double C1554 = C1849 + xAB * C1850;
    const double C1555 = C1850 + xAB * C1858;
    const double C1563 = C1866 + yAB * C1867;
    const double C1564 = C1867 + yAB * C1858;
    const double C1572 = C1882 + zAB * C1883;
    const double C1573 = C1883 + zAB * C1858;
    const double C1581 = C1898 + yAB * C1850;
    const double C1589 = C1906 + zAB * C1850;
    const double C1597 = C1914 + zAB * C1867;
    const double C1605 = C1866 + xAB * C1922;
    const double C1606 = C1922 + xAB * C1930;
    const double C1614 = C1938 + yAB * C1939;
    const double C1615 = C1939 + yAB * C1930;
    const double C1623 = C1954 + zAB * C1955;
    const double C1624 = C1955 + zAB * C1930;
    const double C1632 = C1970 + yAB * C1922;
    const double C1640 = C1978 + zAB * C1922;
    const double C1648 = C1986 + zAB * C1939;
    const double C1656 = C1882 + xAB * C1994;
    const double C1657 = C1994 + xAB * C2002;
    const double C1665 = C1954 + yAB * C2010;
    const double C1666 = C2010 + yAB * C2002;
    const double C1674 = C2025 + zAB * C2026;
    const double C1675 = C2026 + zAB * C2002;
    const double C1683 = C2041 + yAB * C1994;
    const double C1691 = C2049 + zAB * C1994;
    const double C1699 = C2057 + zAB * C2010;
    const double C1707 = C1898 + xAB * C1867;
    const double C1708 = C1867 + xAB * C2072;
    const double C1716 = C1922 + yAB * C2072;
    const double C1724 = C2041 + zAB * C2087;
    const double C1725 = C2087 + zAB * C2072;
    const double C1754 = C1906 + xAB * C1883;
    const double C1755 = C1883 + xAB * C2109;
    const double C1763 = C1978 + yAB * C2087;
    const double C1764 = C2087 + yAB * C2109;
    const double C1772 = C1994 + zAB * C2109;
    const double C1780 = C1914 + yAB * C1883;
    const double C1802 = C1914 + xAB * C2087;
    const double C1803 = C2087 + xAB * C2152;
    const double C1811 = C1986 + yAB * C1955;
    const double C1812 = C1955 + yAB * C2152;
    const double C1820 = C2010 + zAB * C2152;
    const double C40 = C300 + xAB * C301;
    const double C49 = C309 + yAB * C310;
    const double C56 = C318 + zAB * C319;
    const double C63 = C327 + xAB * C310;
    const double C70 = C335 + xAB * C319;
    const double C77 = C343 + yAB * C319;
    const double C84 = C351 + xAB * C352;
    const double C91 = C360 + yAB * C361;
    const double C98 = C369 + zAB * C370;
    const double C105 = C378 + xAB * C361;
    const double C112 = C386 + xAB * C370;
    const double C119 = C394 + yAB * C370;
    const double C126 = C402 + xAB * C403;
    const double C133 = C411 + yAB * C412;
    const double C140 = C420 + zAB * C421;
    const double C147 = C429 + xAB * C412;
    const double C154 = C437 + xAB * C421;
    const double C161 = C445 + yAB * C421;
    const double C168 = C453 + xAB * C454;
    const double C175 = C378 + yAB * C462;
    const double C189 = C309 + xAB * C462;
    const double C182 = C470 + zAB * C471;
    const double C196 = C343 + xAB * C471;
    const double C203 = C386 + yAB * C471;
    const double C210 = C500 + xAB * C501;
    const double C217 = C509 + yAB * C510;
    const double C224 = C437 + zAB * C518;
    const double C238 = C318 + xAB * C518;
    const double C245 = C470 + yAB * C518;
    const double C231 = C526 + xAB * C510;
    const double C252 = C548 + xAB * C549;
    const double C259 = C557 + yAB * C558;
    const double C273 = C509 + xAB * C558;
    const double C266 = C445 + zAB * C566;
    const double C280 = C470 + xAB * C566;
    const double C287 = C369 + yAB * C566;
    const double C44 = C927 + xAB * C928;
    const double C51 = C936 + yAB * C937;
    const double C58 = C945 + zAB * C946;
    const double C65 = C954 + xAB * C937;
    const double C72 = C962 + xAB * C946;
    const double C79 = C970 + yAB * C946;
    const double C86 = C978 + xAB * C979;
    const double C93 = C987 + yAB * C988;
    const double C100 = C996 + zAB * C997;
    const double C107 = C1005 + xAB * C988;
    const double C114 = C1013 + xAB * C997;
    const double C121 = C1021 + yAB * C997;
    const double C128 = C1029 + xAB * C1030;
    const double C135 = C1038 + yAB * C1039;
    const double C142 = C1047 + zAB * C1048;
    const double C149 = C1056 + xAB * C1039;
    const double C156 = C1064 + xAB * C1048;
    const double C163 = C1072 + yAB * C1048;
    const double C170 = C1080 + xAB * C1081;
    const double C177 = C1005 + yAB * C1089;
    const double C191 = C936 + xAB * C1089;
    const double C184 = C1097 + zAB * C1098;
    const double C198 = C970 + xAB * C1098;
    const double C205 = C1013 + yAB * C1098;
    const double C212 = C1127 + xAB * C1128;
    const double C219 = C1136 + yAB * C1137;
    const double C226 = C1064 + zAB * C1145;
    const double C240 = C945 + xAB * C1145;
    const double C247 = C1097 + yAB * C1145;
    const double C233 = C1153 + xAB * C1137;
    const double C254 = C1175 + xAB * C1176;
    const double C261 = C1184 + yAB * C1185;
    const double C275 = C1136 + xAB * C1185;
    const double C268 = C1072 + zAB * C1193;
    const double C282 = C1097 + xAB * C1193;
    const double C289 = C996 + yAB * C1193;
    const double C46 = C1554 + xAB * C1555;
    const double C53 = C1563 + yAB * C1564;
    const double C60 = C1572 + zAB * C1573;
    const double C67 = C1581 + xAB * C1564;
    const double C74 = C1589 + xAB * C1573;
    const double C81 = C1597 + yAB * C1573;
    const double C88 = C1605 + xAB * C1606;
    const double C95 = C1614 + yAB * C1615;
    const double C102 = C1623 + zAB * C1624;
    const double C109 = C1632 + xAB * C1615;
    const double C116 = C1640 + xAB * C1624;
    const double C123 = C1648 + yAB * C1624;
    const double C130 = C1656 + xAB * C1657;
    const double C137 = C1665 + yAB * C1666;
    const double C144 = C1674 + zAB * C1675;
    const double C151 = C1683 + xAB * C1666;
    const double C158 = C1691 + xAB * C1675;
    const double C165 = C1699 + yAB * C1675;
    const double C172 = C1707 + xAB * C1708;
    const double C179 = C1632 + yAB * C1716;
    const double C193 = C1563 + xAB * C1716;
    const double C186 = C1724 + zAB * C1725;
    const double C200 = C1597 + xAB * C1725;
    const double C207 = C1640 + yAB * C1725;
    const double C214 = C1754 + xAB * C1755;
    const double C221 = C1763 + yAB * C1764;
    const double C228 = C1691 + zAB * C1772;
    const double C242 = C1572 + xAB * C1772;
    const double C249 = C1724 + yAB * C1772;
    const double C235 = C1780 + xAB * C1764;
    const double C256 = C1802 + xAB * C1803;
    const double C263 = C1811 + yAB * C1812;
    const double C277 = C1763 + xAB * C1812;
    const double C270 = C1699 + zAB * C1820;
    const double C284 = C1724 + xAB * C1820;
    const double C291 = C1623 + yAB * C1820;
    hrx[0] = C40;
    hrx[1] = C49;
    hrx[2] = C56;
    hrx[3] = C63;
    hrx[4] = C70;
    hrx[5] = C77;
    hrx[6] = C84;
    hrx[7] = C91;
    hrx[8] = C98;
    hrx[9] = C105;
    hrx[10] = C112;
    hrx[11] = C119;
    hrx[12] = C126;
    hrx[13] = C133;
    hrx[14] = C140;
    hrx[15] = C147;
    hrx[16] = C154;
    hrx[17] = C161;
    hrx[18] = C168;
    hrx[19] = C175;
    hrx[20] = C182;
    hrx[21] = C189;
    hrx[22] = C196;
    hrx[23] = C203;
    hrx[24] = C210;
    hrx[25] = C217;
    hrx[26] = C224;
    hrx[27] = C231;
    hrx[28] = C238;
    hrx[29] = C245;
    hrx[30] = C252;
    hrx[31] = C259;
    hrx[32] = C266;
    hrx[33] = C273;
    hrx[34] = C280;
    hrx[35] = C287;
    hry[0] = C44;
    hry[1] = C51;
    hry[2] = C58;
    hry[3] = C65;
    hry[4] = C72;
    hry[5] = C79;
    hry[6] = C86;
    hry[7] = C93;
    hry[8] = C100;
    hry[9] = C107;
    hry[10] = C114;
    hry[11] = C121;
    hry[12] = C128;
    hry[13] = C135;
    hry[14] = C142;
    hry[15] = C149;
    hry[16] = C156;
    hry[17] = C163;
    hry[18] = C170;
    hry[19] = C177;
    hry[20] = C184;
    hry[21] = C191;
    hry[22] = C198;
    hry[23] = C205;
    hry[24] = C212;
    hry[25] = C219;
    hry[26] = C226;
    hry[27] = C233;
    hry[28] = C240;
    hry[29] = C247;
    hry[30] = C254;
    hry[31] = C261;
    hry[32] = C268;
    hry[33] = C275;
    hry[34] = C282;
    hry[35] = C289;
    hrz[0] = C46;
    hrz[1] = C53;
    hrz[2] = C60;
    hrz[3] = C67;
    hrz[4] = C74;
    hrz[5] = C81;
    hrz[6] = C88;
    hrz[7] = C95;
    hrz[8] = C102;
    hrz[9] = C109;
    hrz[10] = C116;
    hrz[11] = C123;
    hrz[12] = C130;
    hrz[13] = C137;
    hrz[14] = C144;
    hrz[15] = C151;
    hrz[16] = C158;
    hrz[17] = C165;
    hrz[18] = C172;
    hrz[19] = C179;
    hrz[20] = C186;
    hrz[21] = C193;
    hrz[22] = C200;
    hrz[23] = C207;
    hrz[24] = C214;
    hrz[25] = C221;
    hrz[26] = C228;
    hrz[27] = C235;
    hrz[28] = C242;
    hrz[29] = C249;
    hrz[30] = C256;
    hrz[31] = C263;
    hrz[32] = C270;
    hrz[33] = C277;
    hrz[34] = C284;
    hrz[35] = C291;
}
