#include <stdio.h>

int main()
{
    int x, y;
    char operator;

    scanf("%d %c %d", &x, &operator, & y);

    int operasi;

    switch (operator)
    {
    case '|':
        operasi = x | y;
        break;
    case '^':
        operasi = x ^ y;
        break;
    case '&':
        operasi = x & y;
        break;
    default:
        break;
    }

    // operasi = 5 = 101
    // 101 & 001 => 1 & 0 , 0 & 0 , 1 & 1 = 001 = 1
    int digit_akhir = operasi & 1; // meng-AND kan hasil operasi dengan 1

    printf("%d", digit_akhir);

    return 0;
}