#include <stdio.h>
#include <string.h>

struct Benda
{
  int id;
  char nama[103];
  int harga;
  int kualitas;
};

void minimumID(int n, struct Benda a[])
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j].id > a[j + 1].id)
      {
        struct Benda temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

void minimumHarga(int n, struct Benda a[])
{
  minimumID(n, a);
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j].harga > a[j + 1].harga)
      {
        struct Benda temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
      }
    }
  }
}

void maximumKualitas(int n, struct Benda a[])
{
  minimumID(n, a);
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j].kualitas < a[j + 1].kualitas)
      {
        struct Benda temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int n;

  scanf("%d", &n);
  struct Benda barang[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d %s %d %d", &barang[i].id, barang[i].nama, &barang[i].harga, &barang[i].kualitas);
  }

  if (n == 1)
  {
    printf("Best item for price is: %d %s %d %d\n", barang[0].id, barang[0].nama, barang[0].harga, barang[0].kualitas);
    printf("Best item for quality is : %d %s %d %d", barang[0].id, barang[0].nama, barang[0].harga, barang[0].kualitas);
  }
  else
  {
    minimumHarga(n, barang);
    printf("Best item for price is: %d %s %d %d\n", barang[0].id, barang[0].nama, barang[0].harga, barang[0].kualitas);
    maximumKualitas(n, barang);
    printf("Best item for quality is : %d %s %d %d", barang[0].id, barang[0].nama, barang[0].harga, barang[0].kualitas);
  }
  return 0;
}
