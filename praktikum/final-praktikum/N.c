#include <stdio.h>

int main()
{
  int N, H;

  scanf("%d %d", &N, &H);

  int arr[N];
  int maxAwal = 0;
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > maxAwal)
    {
      maxAwal = arr[i];
    }
  }

  int pembagianHari[H];
  int index = 0;

  while (index != N)
  {
    for (int i = 0; i < H; i++)
    {
      pembagianHari[i] = 0;
      while (pembagianHari[i] < maxAwal)
      {
        pembagianHari[i] += arr[index];
        index++;
      }
    }
    maxAwal++;
  }

  int maxAkhir = 0;

  for (int i = 0; pembagianHari[i] != '\0'; i++)
  {
    if (pembagianHari[i] > maxAkhir)
    {
      maxAkhir = pembagianHari[i];
    }
  }

  if (maxAkhir > maxAwal)
    printf("%d", maxAwal);
  else
    printf("%d", maxAkhir);
}