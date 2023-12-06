#include <stdio.h>

int main()
{
  int x;

  scanf("%d", &x);

  int arr[x];

  for (int i = 0; i < x; i++)
  {
    scanf("%d", &arr[i]);
  }

  int result;

  if (x == 1)
  {
    result = arr[0];
  }
  else if (x == 2)
  {
    result = 2 * arr[1] - arr[0];
  }
  else if (x == 3)
  {
    result = 3 * arr[2] - 3 * arr[1] + arr[0];
  }
  else if (x == 4)
  {
    result = 4 * arr[3] - 6 * arr[2] + 4 * arr[1] - arr[0];
  }
  else if (x == 5)
  {
    result = 5 * arr[4] - 10 * arr[3] + 10 * arr[2] - 5 * arr[1] + arr[0];
  }

  printf("%d", result);
}