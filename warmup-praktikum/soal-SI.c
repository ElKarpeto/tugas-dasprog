#include <stdio.h>

int main()
{
    int x1, y1;
    int result;

    scanf("%d%d", &x1, &y1);

    if (x1 >= 1 && y1 >= 1 && x1 <= 1000 && y1 <= 1000)
    {
        result = x1 + y1;
        printf("%d", result);
    }
    else
    {
        printf("input tidak sesuai kondisi");
    }

    return 0;
}