
#include <stdio.h>

int main()
{
    int totalSeconds, days, hours, minutes, seconds;

    // Ask user to enter total seconds
    printf("Enter the total number of seconds: ");
    scanf_s("%d", &totalSeconds);

    // Convert seconds into days, hours, minutes and seconds
    days = totalSeconds / 86400;
    hours = (totalSeconds % 86400) / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display results
    printf("\nDays: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}
