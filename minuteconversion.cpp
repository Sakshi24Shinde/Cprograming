
#include <stdio.h>

int main()
{
    int totalMinutes, days, hours, minutes;

    // Ask user to enter total minutes
    printf("Enter the total number of minutes: ");
    scanf_s("%d", &totalMinutes);

    // Convert minutes into days, hours and minutes
    days = totalMinutes / 1440;
    hours = (totalMinutes % 1440) / 60;
    minutes = totalMinutes % 60;

    // Display results
    printf("\nDays: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Remaining Minutes: %d\n", minutes);

    return 0;
}
