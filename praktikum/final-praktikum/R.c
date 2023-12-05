#include <stdio.h>

int Rizz(int a, int b)
{
  if ((a % b == 0) || (b % a == 0))
    return 1;
  else
    return 0;
}

int main()
{
  int a, b;

  scanf("%d %d", &a, &b);
}