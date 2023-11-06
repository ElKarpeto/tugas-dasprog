#include <stdio.h>
#include <string.h>

int main()
{
    char text[101];

    scanf("%100s", text);

    int len = strlen(text);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }
}