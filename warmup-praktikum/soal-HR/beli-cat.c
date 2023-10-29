#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("ngecatnya nanti aja, Mun");
        return 0;
    }

    int luas;
    if (a > b)
    {
        luas = (a - b) * b / 2;
    }
    else
    {
        luas = (b - a) * a / 2;
    }

    int hasil = (luas * 500 / 2) + (luas * 350 / 8) + (luas * 210 * 3 / 8);

    printf("%d", hasil);
    return 0;
}