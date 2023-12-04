#include <stdio.h>

void fungsiPointer(int a, int *b, int c, int *d, int *e)
{
  *b = a % *b;
  *d = c * *d;
  *e = (*b + *d) % *e;
}

int main()
{
  int n;

  scanf("%d", &n);

  int a, b, c, d, e;
  while (n--)
  {
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    fungsiPointer(a, &b, c, &d, &e);

    printf("%d\n", e);
  }
}