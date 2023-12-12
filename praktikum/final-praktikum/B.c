#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int *arr = (int *)malloc((1000002) * sizeof(int));
  for (int i = 0; i <= 1000000; i++)
  {
    arr[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    int x;
    scanf("%d", &x);
    if (arr[x + 1] >= 1)
    {
      arr[x]++;
      arr[x + 1]--;
    }
    else
    {
      arr[x]++;
    }
  }

  int sum = 0;
  for (int i = 0; i <= 1000000; i++)
  {
    sum += arr[i];
  }

  printf("%d", sum);
  free(arr);

  return 0;
}