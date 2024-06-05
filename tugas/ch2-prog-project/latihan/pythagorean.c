#include <stdio.h>

int main()
{
    int m, n;
    int side1, side2, hypotenuse;

    scanf("%d%d", &m, &n);

    side1 = m * m - n * n;
    side2 = 2 * m * n;
    hypotenuse = m * m + n * n;

    printf("values of the Pythagorean triple = %d, %d, %d", side1, side2, hypotenuse);

    return 0;
}