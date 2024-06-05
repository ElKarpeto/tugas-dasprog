#include <stdio.h>

int fib(int x)
{
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;

  return fib(x - 2) + fib(x - 1);
}

int main()
{
  int n;

  scanf("%d", &n);

  int test = fib(n);

  int result;
  if (test % 2 == 0)
  {
    result = test * 321;
  }
  else
  {
    result = test * 123;
  }

  printf("%d\n", result);
  if (result % 5 == 0)
  {
    printf("AKU TERJEBAK DALAM DUNIAKU\n");
  }
  else
  {
    printf("TERIMAKASIH LUPUT TELAH MENJADI PASANGANKU\n");
  }
}