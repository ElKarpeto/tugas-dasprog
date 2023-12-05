#include <stdio.h>
#include <string.h>

void tukarHP(int n, int m, char arr1[n][11], char arr2[m][2][11])
{
  for (int i = 0; i < m; i++)
  {
    char *tukar1 = arr2[i][0];
    char *tukar2 = arr2[i][1];

    int index1 = -1, index2 = -1;
    for (int j = 0; j < n; j++)
    {
      if (strcmp(arr1[j], tukar1) == 0)
      {
        index1 = j;
      }

      if (strcmp(arr1[j], tukar2) == 0)
      {
        index2 = j;
      }
    }

    if (index1 != -1 && index2 != -1)
    {
      char temp[11];
      strcpy(temp, arr1[index1]);
      strcpy(arr1[index1], arr1[index2]);
      strcpy(arr1[index2], temp);
    }
  }
}

int main()
{
  int n, m;

  scanf("%d", &n);

  char listHP[n][11];

  for (int i = 0; i < n; i++)
  {
    scanf("%s", listHP[i]);
  }

  scanf("%d", &m);

  char listTukarHP[m][2][11];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%s", listTukarHP[i][j]);
    }
  }

  tukarHP(n, m, listHP, listTukarHP);

  for (int i = 0; i < n; i++)
  {
    printf("%s\n", listHP[i]);
  }

  return 0;
}
