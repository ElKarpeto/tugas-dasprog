#include <stdio.h>
#include <string.h>
#include <math.h>

void charToBinary(int num)
{
  int binary[9];
  int i = 0;

  while (i <= 8)
  {
    binary[i] = num % 2;
    num = num / 2;
    i++;
  }

  for (int i = 7; i >= 0; i--)
  {
    printf("%i", binary[i]);
  }
}

int binaryToChar(int x)
{
  int decimalNum = 0, i = 0, remainder;

  while (x != 0)
  {
    remainder = x % 10;
    x = x / 10;
    decimalNum += remainder * pow(2, i);
    ++i;
  }
  return decimalNum;
}

int main()
{
  int x;
  scanf("%i\n", &x);

  char s[1001];
  int index = 0;
  while (scanf("%c", &s[index++]) != EOF)
    ;
  s[index] = '\0';

  if (x == 1)
  {
    for (int i = 0; i < strlen(s); i++)
    {
      charToBinary(s[i]);
    }
  }
  else
  {
    int kanan = 7;
    int kiri = 0;
    while (kanan < strlen(s))
    {
      int konversi = 0;
      for (int i = kiri; i <= kanan; i++)
      {
        konversi *= 10;
        konversi += s[i] - '0';
      }
      char temp = binaryToChar(konversi);
      printf("%c", temp);
      kiri = kanan + 1;
      kanan += 8;
    }
  }
}