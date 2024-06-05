#include <stdio.h>

int within_x_percent(double ref, double data, double x);

int main()
{
    char name[10] = {"Water", "Mercury", "Copper", "Silver", "Gold"};
    float boilingPoint[] = {100.0, 357.0, 1187.0, 2193.0, 2660.0};

    float observedBoilingPoint;
    int found = 0;

    printf("Enter the observed boiling point of the substance in °C: ");
    scanf("%f", &observedBoilingPoint);

    for (int i = 0; i < 5; i++)
    {
        if (within_x_percent(name[i], observedBoilingPoint, 5.0))
        {
            printf("The substance is %s\n", boilingPoint[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Substance unknown.\n");
    }

    return 0;
}

int within_x_percent(double ref, double data, double x)
{
    double lowerLimit = ref - (x / 100.0) * ref;
    double upperLimit = ref + (x / 100.0) * ref;

    return (data >= lowerLimit && data <= upperLimit) ? 1 : 0;
}
