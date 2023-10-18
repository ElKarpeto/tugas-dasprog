#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int T;
    int K;
    char text[1001];

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %1000s", &K, text);
        int len = strlen(text);
        char hasil[len];
        int k = 0;

        for (int i = 0; i < K; i++)
        {
            int index = i;
            bool down = true;

            while (index < len)
            {
                hasil[index] = text[k++];

                if (i == 0 || i == K - 1)
                {
                    index += 2 * (K - 1);
                }
                else if (down)
                {
                    index += 2 * (K - 1 - i);
                    down = false;
                }
                else
                {
                    index += 2 * i;
                    down = true;
                }
            }
        }

        for (int i = 0; i < len; i++)
        {
            if (hasil[i] == '_')
            {
                printf(" ");
            }
            else
            {
                printf("%c", hasil[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
