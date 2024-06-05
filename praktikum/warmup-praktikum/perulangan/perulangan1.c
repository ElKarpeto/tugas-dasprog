#include <stdio.h>

int main()
{
    char kata[100];

    scanf("%[^\n]", kata);

    int A = 0, I = 0, U = 0, E = 0, O = 0;
    for (int i = 0; kata[i] != '\0'; i++)
    {
        switch (kata[i])
        {
        case 'A':
        case 'a':
            A++;
            break;

        case 'I':
        case 'i':
            I++;
            break;

        case 'U':
        case 'u':
            U++;
            break;

        case 'E':
        case 'e':
            E++;
            break;

        case 'O':
        case 'o':
            O++;
            break;
        }
    }
    printf("A/a : %d\n", A);
    printf("I/i : %d\n", I);
    printf("U/u : %d\n", U);
    printf("E/e : %d\n", E);
    printf("O/o : %d\n", O);

    return 0;
}