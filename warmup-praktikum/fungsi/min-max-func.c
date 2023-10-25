#include <stdio.h>

void bubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int list[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    bubbleSort(list, n);

    printf("max: %d\n", list[n - 1]);
    printf("min: %d", list[0]);

    return 0;
}