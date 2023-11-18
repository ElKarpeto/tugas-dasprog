#include <stdio.h>

int a;
int minimum(int arr[], int x, int y)
{
  if (x == y)
    return arr[x - 1];

  int min = arr[x - 1];
  for (int i = x; i < y; i++)
  {
    if (min > arr[i])
      min = arr[i];
  }

  return min;
}

int main()
{
  int b;
  scanf("%d %d", &a, &b);

  int arr[a];
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
  }

  while (b--)
  {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", minimum(arr, x, y));
  }
}