#include <stdio.h>

int main()
{
    int N;
    int x1, y1, x2, y2;

    scanf("%d", &N);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int patokanX1, patokanY1, patokanX2, patokanY2; // patokanX1, patokanY1, patokanX2 dan patokanY2 digunakan untuk menentukan nilai yang paling kecil
    int patokan1, patokan2;                         // patokan1 dan patokan2 digunakan untuk menentukan ada di lapisan mana kedua orang tersebut
    if (x1 > (N - x1))
    {
        patokanX1 = (N - x1) + 1;
    }
    else
    {
        patokanX1 = x1;
    }

    if (y1 > (N - y1))
    {
        patokanY1 = (N - y1) + 1;
    }
    else
    {
        patokanY1 = y1;
    }

    if (patokanX1 > patokanY1)
    {
        patokan1 = patokanY1;
    }
    else if (patokanX1 == patokanY1)
    {
        patokan1 = patokanX1;
    }
    else
    {
        patokan1 = patokanX1;
    }

    if (x2 > (N - x2))
    {
        patokanX2 = (N - x2) + 1;
    }
    else
    {
        patokanX2 = x2;
    }

    if (y2 > (N - y2))
    {
        patokanY2 = (N - y2) + 1;
    }
    else
    {
        patokanY2 = y2;
    }

    if (patokanX2 > patokanY2)
    {
        patokan2 = patokanY2;
    }
    else if (patokanX2 == patokanY2)
    {
        patokan2 = patokanX2;
    }
    else
    {
        patokan2 = patokanX2;
    }

    int result = patokan2 - patokan1;

    if (result < 0)
    {
        result = -(result);
    }
    printf("%d", result);

    return 0;
}