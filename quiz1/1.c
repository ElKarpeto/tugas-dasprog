#include <stdio.h>

int banyakBakteri(int num)
{
  if (num == 0)
    return 3;

  return 4 * banyakBakteri(num - 1);
}

int main()
{
  int jam;

  scanf("%d", &jam);

  printf("banyak bakteri setelah %d jam adalah %d", jam, banyakBakteri(jam));

  return 0;
}