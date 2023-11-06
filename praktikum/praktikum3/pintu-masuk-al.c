#include <stdio.h>

int tempkiri = 1;
void sandi(int x)
{
  if (x == 0)
  {
    return;
  }
  else if (x < 0)
  {
    int temp = -(x)-1;
    if (temp == 0)
    {
      return;
    }
    printf("%d ", temp);
    temp--;
    sandi(x + 1);
  }
  else
  {
    printf("%d ", tempkiri);
    tempkiri++;
    sandi(x - 1);
  }
}

int main()
{
  int num;

  scanf("%d", &num);

  sandi(num);
  int x = -num;
  sandi(x);
}