#include <stdio.h>
#include <string.h>

int main()
{
  char text[101];

  scanf("%s", text);

  for (int i = 0; i < strlen(text); i++)
  {
    if (i % 2 != 0)
    {
      printf("%c", text[i]);
    }
  }

  return 0;
}