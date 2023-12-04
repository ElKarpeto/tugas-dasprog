#include <stdio.h>
#include <string.h>

int main()
{
  int n, m;
  char *HP[n];
  char *TT[m];

  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%10s", HP[i]);
  }

  scanf("%d", &m);

  for (int i = 0; i < m; i++)
  {
    scanf("%21s", TT[i]);
  }

  for (int i = 0; i < n; i++)
  {
    printf("%s", HP[i]);
  }
}