#include <stdio.h>
#include <math.h>

// problem 1
float get_rate_drop_factor(float rate, float tubeDrop)
{
  return (rate * tubeDrop) / 60;
}

// problem 3
float get_kg_rate_conc(float rate, float patientWeight, float consentration)
{
  return (rate * patientWeight) / consentration;
}

// problem 4
float get_units_conc(float rate, float consentration)
{
  return rate / consentration;
}

int main()
{
  int n;

  scanf("%d", &n);

  return 0;
}
