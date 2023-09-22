#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int x1, y1, x2, y2;

    int result;

    scanf("%d", &N);
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    int patokanx = x2 - x1;
    int patokany = y2 - y1;
    int X, Y;

    if (patokanx > 0)
    {
        X = patokanx;
    }
    else
    {
        X = -(patokanx);
    }

    if (patokany > 0)
    {
        Y = patokany;
    }
    else
    {
        Y = -(patokany);
    }

    if (X > Y)
    {
        result = y1 - (y2 - (y2 - 1));
    }
    else if (X < Y)
    {
        result = x1 - (x2 - (x2 - 1));
    }
    else
    {
        result = x1 - (x2 - (x2 - 1));
    }

    printf("%d", result);

    return 0;
}