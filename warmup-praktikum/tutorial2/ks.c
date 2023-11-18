#include <stdio.h>

int main()
{
  int a, b;
  char operator;

  scanf("%d %c %d", &a, &operator, & b);

  int result;
  float resultDiv;
  switch (operator)
  {
  case '+':
    result = a + b;
    break;

  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
    break;
  case '/':
    resultDiv = a / (float)b;
    break;
  case '%':
    result = a % b;
    break;

  default:
    break;
  }

  if (operator== '/')
    printf("%f", resultDiv);
  else
    printf("%d", result);

  return 0;
}