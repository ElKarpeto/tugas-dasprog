#include <stdio.h>

int fact(int x)
{
  if (x == 0 || x == 1)
    return 1;

  return x * fact(x - 1);
}

int add(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}

int mul(int a, int b)
{
  return a * b;
}

float div(int a, int b)
{
  if (b == 0)
  {
    printf("tidak bisa membagi bilangan dengan 0");
  }

  return a / (float)b;
}

int main()
{
  int n;
}