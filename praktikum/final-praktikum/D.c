#include <stdio.h>
#include <math.h>

int main()
{
  int peta1, peta2;
  int warungX, warungY, panjang, lebar;
  int orangX, orangY;

  scanf("%d %d", &peta1, &peta2);
  scanf("%d %d %d %d", &warungX, &warungY, &panjang, &lebar);
  scanf("%d %d", &orangX, &orangY);

  float panjangW1, lebarW1, panjangW2, lebarW2;
  panjangW1 = warungX - ((float)panjang / 2);
  panjangW2 = warungX + ((float)panjang / 2);
  lebarW1 = warungY - ((float)lebar / 2);
  lebarW2 = warungY + ((float)lebar / 2);

  float s;
  if ((orangX >= panjangW1 && orangX <= panjangW2) || (orangY >= lebarW1 && orangY <= lebarW2))
  {
    printf("KAMU SUDAH SAMPAI");
  }
  else
  {
    s = sqrtf((powf((warungX - orangX), 2) + pow((warungY - orangY), 2)));
    printf("%.2f METER LAGI", s);
  }
}