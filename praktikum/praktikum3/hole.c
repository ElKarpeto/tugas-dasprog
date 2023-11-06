#include <stdio.h>

int lubang(int *arr[], int row, int column) {
  
  for (int i = 0;i < row;i++) {
    for (int j = 0;j< column;j++) {
      if (&arr[i][j] == 0) {

      }
    }
  }
}

int main()
{
  int a, b;

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