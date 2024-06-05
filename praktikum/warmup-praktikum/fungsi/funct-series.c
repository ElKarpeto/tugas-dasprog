#include <stdio.h>

int series(int x)
{
    if (x == 1)
        return 1;

    return x * x + series(x - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", series(n));

    return 0;
}