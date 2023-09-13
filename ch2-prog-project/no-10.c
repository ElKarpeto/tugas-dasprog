#include <stdio.h>

/*
program untuk menentukan persamaan garis linear yang tegak lurus dengan garis yang melewati 2 titik
dimana garis linear tersebut melewati titik tengah garis yang melewati 2 titik
*/

/* aturan input */

/*
batas minimum double <= x1, y1, x2, y2 <= batas maksimum double
*/

int main()
{
    double x1, y1, x2, y2;
    double x_mid, y_mid;
    double m12, mp;
    double xp;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    x_mid = (x1 + x2) / 2; // untuk menentukan titik tengah pada sumbu-x
    y_mid = (y1 + y2) / 2; // untuk menentukan titik tengah pada sumbu-y

    m12 = (y2 - y1) / (x2 - x1); // menentukan gradien garis yang melewati titik 1 dan 2

    // rumus gradien tegak lurus, m1 * m2 = -1
    mp = -(1 / m12); // menentukan gradien garis tegak lurus

    // rumus persamaan linear dengan gradien dan 1 titik diketahui, y - y1 = m(x - x1)
    // y - y1 = mx - mx1
    // y = mx - mx1 + y1, kita misalkan suku -mx1 + y1 = xp
    // y = mx + xp
    xp = mp * (-x_mid) + y_mid;

    printf("Persamaan garis adalah y = %lfx + (%lf)", mp, xp);
    return 0;
}