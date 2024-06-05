#include <stdio.h>
#include <string.h>
#include <math.h>

int exist(const char arr[][7], const char cek[])
{
  int ada = 0;
  for (int i = 0; i < 10; i++)
  {
    if (strcmp(arr[i], cek) == 0)
    {
      ada = 1;
      break;
    }
  }
  return ada;
}

void resistance(const char arr[][7], const char a[], const char b[], const char c[])
{
  double band1 = 0, band2 = 0, band3 = 0;
  for (int i = 0; i < 10; i++)
  {
    if (strcmp(arr[i], a) == 0)
    {
      band1 = i * 10;
    }

    if (strcmp(arr[i], b) == 0)
    {
      band2 = i;
    }

    if (strcmp(arr[i], c) == 0)
    {
      band3 = pow(10, i);
    }
  }

  double sum = (band1 + band2) * band3;

  if (sum >= 1000)
  {
    printf("%.0lf kilo-ohms\n", (sum / 1000));
  }
  else
  {
    printf("%.0lf ohms\n", sum);
  }
}

int main()
{
  const char COLOR_CODES[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"};

  char another = 'y';

  char band1[7], band2[7], band3[7];
  while (another == 'y' || another == 'Y')
  {
    printf("Enter the colors of the resistor's three bands, beginning with\n");
    printf("the band nearest the end. Type the colors in lowercase letters\n");
    printf("only, NO CAPS.\n");

    printf("Band 1 => ");
    scanf("%s", band1);
    printf("Band 2 => ");
    scanf("%s", band2);
    printf("Band 3 => ");
    scanf("%s", band3);

    int existsBand1 = exist(COLOR_CODES, band1);
    int existsBand2 = exist(COLOR_CODES, band2);
    int existsBand3 = exist(COLOR_CODES, band3);

    if (existsBand1 && existsBand2 && existsBand3)
    {
      printf("Resistance value: ");
      resistance(COLOR_CODES, band1, band2, band3);
    }
    else
    {
      if (!existsBand1)
        printf("Invalid color: %s\n", band1);

      if (!existsBand2)
        printf("Invalid color: %s\n", band2);

      if (!existsBand3)
        printf("Invalid color: %s\n", band3);
    }

    printf("Do you want to decode another resistor?\n=> ");
    scanf(" %c", &another);
  }

  return 0;
}
