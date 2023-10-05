#include <stdio.h>

int main()
{
    int weekday_minutes, night_minutes, weekend_minutes, total_minutes;
    double pretax_bill, average_minute_cost, taxes, total_bill;

    printf("Enter the number of weekday minutes used: ");
    scanf("%d", &weekday_minutes);
    printf("Enter the number of night minutes used: ");
    scanf("%d", &night_minutes);
    printf("Enter the number of weekend minutes used: ");
    scanf("%d", &weekend_minutes);

    total_minutes = weekday_minutes + night_minutes + weekend_minutes;
    pretax_bill = 3999 + (total_minutes > 600 ? (total_minutes - 600) * 40 : 0);
    average_minute_cost = pretax_bill / total_minutes;
    taxes = pretax_bill * 0.0525;
    total_bill = pretax_bill - taxes;

    printf("Taxes: $%.2f\n", taxes);
    printf("Average Minute Cost: %.2f cent\n", average_minute_cost);
    printf("Pretax Bill: $%.2f\n", pretax_bill / 100.0);
    printf("Total Bill: $%.2f\n", total_bill / 100.0);

    return 0;
}
