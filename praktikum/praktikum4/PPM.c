#include <stdio.h>

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int result1[n][n], result2[n][n], result3[n][n];
  if (m % 4 == 0)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", *(*(arr + i) + j));
      }
      printf("\n");
    }
  }
  else if (m % 4 == 1)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 && j == 0)
        {
          result1[i][j] = arr[n - 1][0];
        }
        else if (i == 0 && j == (n - 1))
        {
          result1[i][j] = arr[0][0];
        }
        else if (i == (n - 1) && j == 0)
        {
          result1[i][j] = arr[n - 1][n - 1];
        }
        else if (i == (n - 1) && j == (n - 1))
        {
          result1[i][j] = arr[0][n - 1];
        }

        result1[i][j] = arr[j][i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", *(*(result1 + i) + j));
      }
      printf("\n");
    }
  }
  else if (m % 4 == 2)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 && j == 0)
        {
          result1[i][j] = arr[n - 1][0];
        }
        else if (i == 0 && j == (n - 1))
        {
          result1[i][j] = arr[0][0];
        }
        else if (i == (n - 1) && j == 0)
        {
          result1[i][j] = arr[n - 1][n - 1];
        }
        else if (i == (n - 1) && j == (n - 1))
        {
          result1[i][j] = arr[0][n - 1];
        }

        result1[i][j] = arr[j][i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 && j == 0)
        {
          result2[i][j] = result1[n - 1][0];
        }
        else if (i == 0 && j == (n - 1))
        {
          result2[i][j] = result1[0][0];
        }
        else if (i == (n - 1) && j == 0)
        {
          result2[i][j] = result1[n - 1][n - 1];
        }
        else if (i == (n - 1) && j == (n - 1))
        {
          result2[i][j] = result1[0][n - 1];
        }

        result2[i][j] = result1[j][i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", *(*(result2 + i) + j));
      }
      printf("\n");
    }
  }
  else if (m % 4 == 3)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 && j == 0)
        {
          result1[i][j] = arr[n - 1][0];
        }
        else if (i == 0 && j == (n - 1))
        {
          result1[i][j] = arr[0][0];
        }
        else if (i == (n - 1) && j == 0)
        {
          result1[i][j] = arr[n - 1][n - 1];
        }
        else if (i == (n - 1) && j == (n - 1))
        {
          result1[i][j] = arr[0][n - 1];
        }

        result1[i][j] = arr[j][i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 && j == 0)
        {
          result2[i][j] = result1[n - 1][0];
        }
        else if (i == 0 && j == (n - 1))
        {
          result2[i][j] = result1[0][0];
        }
        else if (i == (n - 1) && j == 0)
        {
          result2[i][j] = result1[n - 1][n - 1];
        }
        else if (i == (n - 1) && j == (n - 1))
        {
          result2[i][j] = result1[0][n - 1];
        }

        result2[i][j] = result1[j][i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == 0 && j == 0)
        {
          result3[i][j] = result2[n - 1][0];
        }
        else if (i == 0 && j == (n - 1))
        {
          result3[i][j] = result2[0][0];
        }
        else if (i == (n - 1) && j == 0)
        {
          result3[i][j] = result2[n - 1][n - 1];
        }
        else if (i == (n - 1) && j == (n - 1))
        {
          result3[i][j] = result2[0][n - 1];
        }

        result3[i][j] = result2[j][i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", *(*(result3 + i) + j));
      }
      printf("\n");
    }
  }

  return 0;
}