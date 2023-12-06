#include <stdio.h>

void konversiCharToBinary(char karakter)
{
  for (int i = 128; i > 0; i /= 2)
  {
    printf("%d", (karakter & i) ? 1 : 0);
  }
}

void konversiBinaryToChar(char binaryString[], int n)
{
  for (int i = 0; i < n; i += 8)
  {
    char result = 0;

    for (int j = 0; j < 8; j++)
    {
      result *= 2;
      result += binaryString[i + j] - '0';
    }

    printf("%c", result);
  }
}

int main()
{
  int c;

  scanf("%d\n", &c);

  char text[2001];
  int index = 0;
  while (scanf("%c", &text[index++]) != EOF)
    ;
  text[index] = NULL;

  printf("%s\n", text);

  int len = strlen(text);

  if (c == 1)
  {
    for (int i = 0; i < len; i++)
    {
      konversiCharToBinary(text[i]);
    }
  }

  if (c == -1)
  {
    konversiBinaryToChar(text, len);
  }

  return 0;
}
