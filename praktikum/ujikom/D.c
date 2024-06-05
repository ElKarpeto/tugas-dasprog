#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float hasil = (float)(a + b + c + d + e) / 5;

    printf("%.2f", hasil);
}