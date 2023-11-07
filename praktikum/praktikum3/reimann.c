#include <stdio.h>
#include <string.h>

int sumDigit(int x)
{
  int sum = 0, lastDigit;
  while (x > 0)
  {
    lastDigit = x % 10;
    sum += lastDigit;
    x /= 10;
  }

  if (sum < 10)
    return sum;
  else
    return sumDigit(sum);
}

int main()
{
  char num[100001];

  scanf("%100000s", num);

  int digit = 0;
  for (int i = 0; i < strlen(num); i++)
  {
    digit += (num[i] - 48);
  }

  printf("%d\n", sumDigit(digit));
  return 0;
}