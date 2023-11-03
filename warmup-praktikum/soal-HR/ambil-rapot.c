#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    int n;
    int orang = 4;
    while (orang--)
    {
        scanf("%d", &n);

        if (n > 75)
        {
            printf("Wah kamu lulus!!\n");
        }
        else if (n <= 75 && n > x)
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