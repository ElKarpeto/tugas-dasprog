#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n / 2 + 1];

    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[index++] = i;
        }
    }

    for (int i = 0; i < n / 2 - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("%d", arr[n / 2 - 1]);

    return 0;
}