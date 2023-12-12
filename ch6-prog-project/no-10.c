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

  printf("1: Addition\n");
  printf("2: Subtraction\n");
  printf("3: Multiplication\n");
  printf("4: Division\n");
  printf("5: Factorial\n");
  printf("6: Quit\n");

  printf("Enter the choice => ");
  scanf("%d", &n);

  int a, b;
  switch (n)
  {
  case 1:
    printf("Enter two numbers => ");
    scanf("%d %d", &a, &b);

    printf("Summation => %d", add(a, b));
    break;

  case 2:
    printf("Enter two numbers => ");
    scanf("%d %d", &a, &b);

    printf("Subtraction => %d", sub(a, b));
    break;
  case 3:
    printf("Enter two numbers => ");
    scanf("%d %d", &a, &b);

    printf("Multiplication => %d", mul(a, b));
    break;
  case 4:
    printf("Enter two numbers => ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
      printf("Tidak Bisa Membagi Bilangan dengan 0");
    }
    else
    {
      printf("Divition %d and %d => %.3f", a, b, div(a, b));
    }

    break;
  case 5:
    printf("Enter 1 numbers => ");
    scanf("%d", &a);

    printf("Factorial of %d => %d", a, fact(a));
    break;

  case 6:
    return 0;

  default:
    return 0;
  }
}