#include <stdio.h>

long long countDigits(long long num)
{
  long long sum = 0, lastDigit = 0;
  while (num > 0)
  {
    lastDigit = num % 10;
    num = num / 10;
    sum += lastDigit;
  }

  return sum;
}

long long hasil(long long x)
{
  if (x < 10)
  {
    return x;
  }
  hasil(countDigits(x));
}

int main()
{
  long long n;

  scanf("%lld", &n);

  printf("%lld", hasil(n));
}