#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char s[33];

    scanf("%d", &N);
    scanf("%32s", s);

    int len = strlen(s);

    if (N % 2 != 0)
    {
        for (int j = 0; j < len; j++)
        {
            s[j] = s[j] ^ len;
        }
    }

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    return 0;
}
