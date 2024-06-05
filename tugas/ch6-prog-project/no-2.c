#include <stdio.h>
#include <math.h>

float fig_drops_min(float rate, float dropFactor)
{
  // rounded
  return (rate * dropFactor) / 60;
}

float by_weight(float rate, float patientWeight, float concentration)
{
  // rounded
  return (rate * patientWeight) / concentration;
}

float by_units(float rate, float concentration)
{
  // rounded
  return rate / concentration;
}

// problem 1
float get_rate_drop_factor(float rate, float dropFactor)
{
  return roundf(fig_drops_min(rate, dropFactor));
}

// problem 2
float fig_ml_hr(float hours)
{
  return roundf(1000 / hours);
}

// problem 3
float get_kg_rate_conc(float rate, float patientWeight, float concentration)
{
  return roundf(by_weight(rate, patientWeight, concentration));
}

// problem 4
float get_units_conc(float rate, float concentration)
{
  return roundf(by_units(rate, concentration));
}

int main()
{
  int n;

  printf("================ INTRAVENOUS RATE ASSISTANT ================\n");
  printf("Enter the number of the problem you wish to solve.\n");
  printf("      GIVEN A MEDICAL ORDER IN             CALCULATE RATE IN\n");
  printf("(1) ml/hr & tubing drop factor             drops / min\n");
  printf("(2) 1 L for n hr                           ml / hr\n");
  printf("(3) mg/kg/hr & concentration in mg/ml      ml / hr\n");
  printf("(4) units/hr & concentration in units/ml   ml / hr\n");
  printf("(5) QUIT\n");

  printf("Problem=> ");
  scanf("%d", &n);

  float rate, drop, hours, weight, concentration;
  switch (n)
  {
  case 1:
    printf("Enter rate in ml/hr=> ");
    scanf("%f", &rate);
    printf("Enter tubing's drop factor(drops/ml)=> ");
    scanf("%f", &drop);

    printf("The drop rate per minute is %.2f.", get_rate_drop_factor(rate, drop));
    break;

  case 2:
    printf("Enter number of hours=> ");
    scanf("%f", &hours);

    printf("The rate in milliliters per hour is %.0f.", fig_ml_hr(hours));
    break;

  case 3:
    printf("Enter rate in mg/kg/hr=> ");
    scanf("%f", &rate);
    printf("Enter patient weight in kg=> ");
    scanf("%f", &weight);
    printf("Enter concentration in mg/ml=> ");
    scanf("%f", &concentration);

    printf("The rate in milliliters per hour is %.0f.", get_kg_rate_conc(rate, weight, concentration));
    break;

  case 4:
    printf("Enter rate in units/hr=> ");
    scanf("%f", &rate);
    printf("Enter concentration in units/ml=> ");
    scanf("%f", &concentration);

    printf("The rate in milliliters per hour is %.0f.", get_units_conc(rate, concentration));
    break;

  case 5:
    return 0;

  default:
    break;
  }

  return 0;
}
