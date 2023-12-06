#include <stdio.h>
#define ull unsigned long long

int main()
{
  ull a, b;

  scanf("%llu %llu", &a, &b);

  if (b > a)
  {
    ull temp = a;
    a = b;
    b = temp;
  }

  if (a % b == 0)
  {
    printf("Rizz");
    if ((a & b) == 0)
    {
      printf("Wuzz");
    }
    else if ((a & b) == b)
    {
      printf("Buzz");
    }
  }
  else if ((a % b) != 0)
  {
    printf("Not Rizz");
    if ((a & b) == 0)
    {
      printf(", but Wuzz!");
    }
    else if ((a & b) == b)
    {
      printf(", but Buzz!");
    }
  }

  return 0;
}