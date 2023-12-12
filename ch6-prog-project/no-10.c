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

  return a / (float)b;
}

int main()
{
  int n;

  printf("Enter ");
  scanf("%d", &n);
  int a, b;
  scanf("%d %d", &a, &b);
  switch (n)
  {
  case 1:
    printf("Sum => %d", add(a, b));
    break;

  default:
    break;
  }
}