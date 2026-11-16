
#include <stdio.h>

int main()
{
    int totalHours, days, hours, minutes;

    // Ask user to enter total hours
    printf("Enter the total number of hours: ");
    scanf_s("%d", &totalHours);

    // Convert hours into days, hours and minutes
    days = totalHours / 24;
    hours = totalHours % 24;
    minutes = 0;

    // Display results
    printf("\nDays: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);

    return 0;
}
