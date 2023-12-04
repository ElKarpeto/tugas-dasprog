#include <stdio.h>

int FPB(int a, int b)
{
  if (b == 0)
    return a;
  else
    return FPB(b, a % b);
}

int main()
{
  int a, b;

  scanf("%d %d", &a, &b);

  int result = FPB(a, b);

  if (result > 9)
    printf("Yey brankas berhasil dibuka :D");
  else
    printf("Yah gagal :(");
}