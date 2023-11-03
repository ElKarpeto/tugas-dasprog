#include <stdio.h>

int main()
{
    float a, b;
    char x;

    scanf("%f %c %f", &a, &x, &b);

    float result;
    switch (x)
    {
    case '+':
        result = a + b;
        printf("+ %.2f\n", result);
        break;
    case '-':
        result = a - b;
        printf("- %.2f\n", result);
        break;
    case '*':
        result = a * b;
        printf("* %.2f\n", result);
        break;
    case '/':
        if (b == 0)
        {
            printf("gk mungkin mbak\n");
            break;
        }

        result = a / b;
        printf("/ %.2f", result);
        break;
    case '%':
        if (b == 0)
        {
            printf("gk mungkin mbak\n");
            break;
        }

        result = (int)a % (int)b;
        printf("%% %.2f\n", result);
        break;

    default:
        break;
    }

    return 0;
}