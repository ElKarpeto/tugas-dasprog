#include <stdio.h>

void biner(int x)
{
  if (x >= 1)
  {
    if (x % 2 == 0)
    {
      biner(x / 2);
      printf("0");
    }
    else
    {
      biner(x / 2);
      printf("1");
    }
  }
}

int main()
{
  int n;

  scanf("%d", &n);

  biner(n);
  printf("\n");

  return 0;
}