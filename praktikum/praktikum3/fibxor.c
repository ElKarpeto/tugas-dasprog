#include <stdio.h>

int fibXOR(int x)
{
  if (x > 3)
    return fibXOR(x - 1) ^ fibXOR(x - 2) ^ fibXOR(x - 3);
  if (x == 3)
    return 3;
  if (x == 2)
    return 3;
  if (x == 1)
    return 1;
}

int main()
{
  int n;

  scanf("%d", &n);

  printf("%d", fibXOR(n));

  return 0;
}