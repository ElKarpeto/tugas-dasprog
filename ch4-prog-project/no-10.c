#include <stdio.h>

int computeBakingTime(char breadType, int isDouble, int isManual);

int main()
{
    char breadType;
    int isDouble, isManual;

    printf("Enter bread type (W for White, S for Sweet): ");
    scanf(" %c", &breadType);

    printf("Is the loaf size double? (1 for Yes, 0 for No): ");
    scanf("%d", &isDouble);

    printf("Is the baking manual? (1 for Yes, 0 for No): ");
    scanf("%d", &isManual);

    int totalBakingTime = computeBakingTime(breadType, isDouble, isManual);
    printf("Total baking time: %d minutes\n", totalBakingTime);

    return 0;
}

int computeBakingTime(char breadType, int isDouble, int isManual)
{
    int primaryKneading, primaryRising, secondaryKneading, secondaryRising, loafShaping, finalRising, baking, cooling;

    switch (breadType)
    {
    case 'W':
    case 'w':
        primaryKneading = 15;
        primaryRising = 60;
        secondaryKneading = 18;
        secondaryRising = 20;
        loafShaping = 2;
        finalRising = 75;
        baking = 45;
        cooling = 30;
        break;
    case 'S':
    case 's':
        primaryKneading = 20;
        primaryRising = 60;
        secondaryKneading = 33;
        secondaryRising = 30;
        loafShaping = 2;
        finalRising = 75;
        baking = 35;
        cooling = 30;
        break;
    default:
        printf("Invalid bread type selected.\n");
        return 0;
    }

    if (isManual)
    {
        return primaryKneading + primaryRising + secondaryKneading + secondaryRising;
    }

    if (isDouble)
    {
        baking = (int)(baking * 1.5);
    }

    return primaryKneading + primaryRising + secondaryKneading + secondaryRising + finalRising + baking + cooling;
}
