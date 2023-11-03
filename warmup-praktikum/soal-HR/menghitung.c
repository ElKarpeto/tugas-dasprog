#include <stdio.h>

int main()
{
    long long a, b;

    scanf("%lld %lld", &a, &b);

    long long hasil;

    hasil = (a + b) % 1000000007;

    printf("%lld\n", hasil);

    return 0;
}