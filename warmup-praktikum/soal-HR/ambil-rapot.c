#include <stdio.h>

int main()
{
    float x;

    scanf("%f", &x);

    float arr[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > 75)
        {
            printf("Wah kamu lulus!!\n");
        }
        else if (arr[i] <= 75 && arr[i] > x)
        {
            printf("Loh kamu harus remidi :3\n");
        }
        else
        {
            printf("Yah kamu harus ngulang :\\\n");
        }
    }

    return 0;
}