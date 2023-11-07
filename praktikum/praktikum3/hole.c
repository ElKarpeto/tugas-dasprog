#include <stdio.h>

int a, b;
int arr[100][100];

int hole(int x, int y)
{
  int hasil = 0;

  if (arr[x][y] == 1)
  {
    return;
  }

  if (arr[x][y] == 0)
  {
    arr[x][y] = -1;
    hasil++;
  }
  hole(x + 1, y - 1);
  hole(x + 1, y);
  hole(x + 1, y + 1);
  hole(x, y + 1);
}

int main()
{

  scanf("%d %d", &a, &b);

  int arr[a][b];

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}