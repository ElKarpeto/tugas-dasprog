#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;

    scanf("%d", &k);

    int result = 0;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == k)
        {
            result++;
        }
    }

    printf("%d", result);
}