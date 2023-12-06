#include <stdio.h>
#include <string.h>

int main()
{
  int c;

  scanf("%d\n", &c);

  char text[2001], decText[251] = "", encText[2001] = "";

  int index = 0;
  while (scanf("%c", &text[index++]) != EOF)
    ;
  text[index] = '\0';

  int len = strlen(text);
  if (c == 1)
  {
    for (int i = 0; i < len; i++)
    {
      char temp[9];
      temp[8] = '\0';

      int decimal = (int)text[i];
      for (int j = 7; j >= 0; j--)
      {
        temp[j] = (decimal % 2) - '0';
        decimal /= 2;
      }

      strcat(encText, temp);
    }

    printf("%s", encText);
  }

  if (c == -1)
  {
    for (int i = 0; i < len; i += 8)
    {
      char result = 0;

      for (int j = 0; j < 8; j++)
      {
        result *= 2;
        result += text[i + j] - '0';
      }

      printf("%c", result);
    }
  }
}