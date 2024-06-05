#include <stdio.h>

int karpet(int x)
{
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;

  return karpet(x - 1) + karpet(x - 2);
}

int main()
{
  int n;

  scanf("%d", &n);

  if (n < 0)
  {
    printf("Invalid input. Please enter a non-negative number.\n");
  }
  else
  {
    printf("%d\n", karpet(n));
  }

  return 0;
}
