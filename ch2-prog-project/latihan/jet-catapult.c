#include <stdio.h>

int main()
{
    float a;
    float speed = 278;

    scanf("%f", &a);

    speed = speed * 5 / 18;

    float t = speed / a;

    printf("waktu yang dibutuhkan = %3.f", t);

    return 0;
}