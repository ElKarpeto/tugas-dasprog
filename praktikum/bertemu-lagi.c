#include <stdio.h>

int main()
{
    int N;
    int x1, y1, x2, y2;

    scanf("%d", &N);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int patokanX1, patokanY1, patokanX2, patokanY2; // patokanX1, patokanY1, patokanX2 dan patokanY2 digunakan untuk menentukan nilai yang paling kecil
    int layer1, layer2;                             // layer1 dan layer2 digunakan untuk menentukan ada di lapisan mana kedua orang tersebut
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
        layer1 = patokanY1;
    }
    else if (patokanX1 == patokanY1)
    {
        layer1 = patokanX1;
    }
    else
    {
        layer1 = patokanX1;
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
        layer2 = patokanY2;
    }
    else if (patokanX2 == patokanY2)
    {
        layer2 = patokanX2;
    }
    else
    {
        layer2 = patokanX2;
    }

    int result = layer2 - layer1;

    if (result < 0)
    {
        result = -(result);
    }
    printf("%d", result);

    return 0;
}