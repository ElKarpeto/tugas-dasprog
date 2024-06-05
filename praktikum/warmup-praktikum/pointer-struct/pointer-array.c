#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}