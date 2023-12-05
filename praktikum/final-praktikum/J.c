#include <stdio.h>

void fungsiPointer(long long a, long long *b, long long c, long long *d, long long *e)
{
  *b = a % *b;
  *d = c * *d;
  *e = ((*b % *e) + (*d % *e)) % *e;
}

int main()
{
  int n;

  scanf("%d", &n);

  long long a, b, c, d, e;
  while (n--)
  {
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);

    fungsiPointer(a, &b, c, &d, &e);

    printf("%lld\n", e);
  }
}