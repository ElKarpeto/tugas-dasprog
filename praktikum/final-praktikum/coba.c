#include <stdio.h>

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
  int n = 10023;

  int hasil = digitSum(n);

  printf("%d", hasil);
}