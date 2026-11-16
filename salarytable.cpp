
#include <stdio.h>

int main()
{
    int n, i;
    char id[10][11];
    double salary[10];

    // Ask for number of employees
    printf("Enter the number of employees: ");
    scanf_s("%d", &n);

    // Accept employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID %d: ", i + 1);
        scanf_s("%10s", id[i], (unsigned)sizeof(id[i]));

        printf("Enter Monthly Salary (Rs.): ");
        scanf_s("%lf", &salary[i]);
    }

    // Display formatted table
    printf("\n");
    printf("------------------------------------------------\n");
    printf("%-15s %-20s\n", "Employee ID", "Monthly Salary");
    printf("------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-15s Rs. %-15.2lf\n", id[i], salary[i]);
    }

    printf("------------------------------------------------\n");

    return 0;
}
