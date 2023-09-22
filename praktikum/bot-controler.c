#include <stdio.h>

int main()
{
    int x, y;
    int w, a, s, d;
    int X, Y;

    scanf("%d%d", &x, &y);
    scanf("%d%d%d%d", &w, &a, &s, &d);

    X = x - a + d;
    Y = y + w - s;

    if ((X > 0 && X < 100) && (Y > 0 && Y < 100))
    {
        printf("Bot Mr. Biti berada di kuadran 1");
    }
    else if ((X > 0 && X < 100) && (Y < 0 && Y > -100))
    {
        printf("Bot Mr. Biti berada di kuadran 4");
    }
    else if ((X < 0 && X > -100) && (Y < 0 && Y > -100))
    {
        printf("Bot Mr. Biti berada di kuadran 3");
    }
    else if ((X < 0 && X > -100) && (Y > 0 && Y < 100))
    {
        printf("Bot Mr. Biti berada di kuadran 2");
    }
    else if (X == 0 && Y != 0)
    {
        printf("Bot Mr. Biti berada di sumbu Y!");
    }
    else if (X != 0 && Y == 0)
    {
        printf("Bot Mr. Biti berada di sumbu X!");
    }
    else if (X == 0 && Y == 0)
    {
        printf("Bot Mr. Biti berada di tengah arena");
    }

    if ((X > 100 || Y > 100) || (X < -100 || Y < -100) || (X > 100 || Y < -100) || (X < -100 || Y > 100))
    {
        printf("Bot Mr. Biti keluar arena");
    }

    return 0;
}