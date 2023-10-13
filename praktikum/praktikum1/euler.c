#include <stdio.h>

int main()
{
    int P, M, N;

    scanf("%d %d %d", &P, &M, &N);

    // kalau sisa kue adalah kelipatan (N + 1), dimana (N + 1) adalah kelipatan saat orang yang pertama memakan kue kalah
    if (M % (N + 1) == 0)
    {
        if (P == 1)
        {
            printf("risma");
        }
        else
        {
            printf("haqqy");
        }
    }
    else
    {
        if (P == 1)
        {
            printf("haqqy");
        }
        else
        {
            printf("risma");
        }
    }

    return 0;
}
