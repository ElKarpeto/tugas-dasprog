#include <stdio.h>

int FPB(int a, int b)
{
  if (b == 0)
    return a;
  else
    return FPB(b, a % b);
}

int digitSum(int num)
{
  int sum = 0;
  while (num != 0)
  {
    sum++;
    num /= 10;
  }

  return sum;
}

int main()
{
  int a, b;

  scanf("%ld %ld", &a, &b);

  int result = FPB(a, b);

  if (digitSum(result) % 2 == 0)
    printf("Yey brankas berhasil dibuka :D");
  else
    printf("Yah gagal :(");

  return 0;
}