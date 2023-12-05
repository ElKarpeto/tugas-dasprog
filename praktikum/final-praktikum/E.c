#include <stdio.h>

void rotasi(int n, int a[n][n], int b)
{

  if (b % 4 == 0)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", *(*(a + i) + j));
      }
      printf("\n");
    }
  }
  else if (b % 4 == 1)
  {
    for (int j = n - 1; j >= 0; j--)
    {
      for (int i = 0; i < n; i++)
      {
        printf("%d ", *(*(a + i) + j));
      }
      printf("\n");
    }
  }
  else if (b % 4 == 2)
  {
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = n - 1; j >= 0; j--)
      {
        printf("%d ", *(*(a + i) + j));
      }
      printf("\n");
    }
  }
  else if (b % 4 == 3)
  {
    for (int j = 0; j < n; j--)
    {
      for (int i = n - 1; i >= 0; i++)
      {
        printf("%d ", *(*(a + i) + j));
      }
      printf("\n");
    }
  }
}

int main()
{
  int banyak;

  scanf("%d", &banyak);

  int n, putar;
  while (banyak--)
  {
    scanf("%d %d", &n, &putar);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        scanf("%d", &matrix[i][j]);
      }
    }

    rotasi(n, matrix, putar);
  }
}