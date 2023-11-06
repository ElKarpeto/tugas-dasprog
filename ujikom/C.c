#include <stdio.h>

void nilaiHuruf(int x)
{
    if (x >= 0 && x <= 40)
    {
        printf("E");
    }
    else if (x >= 41 && x <= 55)
    {
        printf("D");
    }
    else if (x >= 56 && x <= 60)
    {
        printf("C");
    }
    else if (x >= 61 && x <= 65)
    {
        printf("BC");
    }
    else if (x >= 66 && x <= 75)
    {
        printf("B");
    }
    else if (x >= 76 && x <= 85)
    {
        printf("AB");
    }
    else
    {
        printf("A");
    }
}

int main()
{
    int nilai;

    scanf("%d", &nilai);

    nilaiHuruf(nilai);
}