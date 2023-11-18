#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int x;

  scanf("%d", &x);

  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (x == *(arr + i) + *(arr + j))
      {
        printf("YA");
        break;
      }
      else
      {
        printf("TIDAK");
      }
    }
  }
}