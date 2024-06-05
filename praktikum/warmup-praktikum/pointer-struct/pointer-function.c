#include <stdio.h>

int tambah(int x, int y, int *z)
{
    *z = x + y;
}

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b);

    tambah(a, b, &c);

    printf("%d", c);
}