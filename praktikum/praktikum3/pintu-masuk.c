#include <stdio.h>

int n, x, y = 1;
void pintu(int n)
{
  if (n == 0)
  {
    return;
  }
  else if (n < 0)
  {
    int z = -n - 1;
    if (z == 0)
    {
      return;
    }
    printf("%d ", z);
    pintu(n + 1);
  }

  else
  {
    printf("%d ", y);
    y++;
    pintu(n - 1);
  }
}

int main()
{
  scanf("%d", &n);
  pintu(n);
  x = -n;
  pintu(x);
}