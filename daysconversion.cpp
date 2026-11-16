
#include <stdio.h>

int main()
{
    int days, years, weeks;

    // Ask user to enter total days
    printf("Enter the total number of days: ");
    scanf_s("%d", &days);

    // Convert days into years, weeks and days
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    // Display results
    printf("\nYears: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
