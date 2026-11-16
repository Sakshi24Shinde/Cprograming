
#include <stdio.h>

int main()
{
    int totalDays, months, days;

    // Ask user to enter total days
    printf("Enter the total number of days: ");
    scanf_s("%d", &totalDays);

    // Convert days into months and remaining days
    months = totalDays / 30;
    days = totalDays % 30;

    // Display results
    printf("\nMonths: %d\n", months);
    printf("Remaining Days: %d\n", days);

    return 0;
}
