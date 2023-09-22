#include <stdio.h>

int main()
{
    int P, M, N;

    scanf("%d%d%d", &P, &M, &N);
    int m = M - 1;

    if ((m % N > 0) && (P == 1))
    {
        printf("haqqy");
    }
    else if ((m % N == 0) && (P == 1))
    {
        printf("risma");
    }
    else if ((m % N > 0) && (P == 2))
    {
        printf("risma");
    }
    else if ((m & N == 0) && (P == 2))
    {
        printf("haqqy");
    }

    return 0;
}
