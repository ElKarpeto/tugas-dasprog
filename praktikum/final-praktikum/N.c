#include <stdio.h>
#define ll long long

int main()
{
  int n, hari;
  scanf("%d %d", &n, &hari);

  ll beratRobot[n];
  ll beratTotal = 0;
  ll max = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &beratRobot[i]);
    beratTotal += beratRobot[i];
    if (beratRobot[i] > max)
    {
      max = beratRobot[i];
    }
  }

  ll minimalBerat = 0, penambah = 0, berhasil = 0;

  while (berhasil == 0)
  {
    minimalBerat = max + penambah;
    penambah++;

    ll beratPerhari = 0, index = 0, hariSementara = 0, totalSementara = 0;

    while (hariSementara < hari)
    {
      while ((beratPerhari < minimalBerat) && (index < n))
      {
        if (beratPerhari + beratRobot[index] <= minimalBerat)
        {
          beratPerhari += beratRobot[index];
          index++;
        }
        else
        {
          break;
        }
      }
      if (index <= n)
      {
        totalSementara += beratPerhari;
        beratPerhari = 0;
        hariSementara++;
      }
    }

    if (totalSementara == beratTotal)
    {
      berhasil = 1;
      printf("%lld", minimalBerat);
    }
  }

  return 0;
}