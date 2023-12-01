#include <stdio.h>

int fungsi(int num)
{
  if (num == 0)
    return 2;
  if (num == 1)
    return 1;
  if (num == 2)
    return 3;

  return fungsi(num - 1) + fungsi(num - 2) - fungsi(num - 3);
}

int main()
{
  int n;

  scanf("%d", &n);

  printf("hasil dari fungsi ke-%d adalah %d", n, fungsi(n));

  return 0;
}