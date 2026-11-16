
#include <stdio.h>

int main()
{
    char id[11];
    int hour;
    double value, salary;

    // Input employee ID
    printf("Input the Employees ID (Max. 10 chars): ");
    scanf_s("%10s", id, (unsigned)sizeof(id));

    // Input working hours
    printf("\nInput the working hrs: ");
    scanf_s("%d", &hour);

    // Input hourly salary
    printf("\nSalary amount/hr: ");
    scanf_s("%lf", &value);

    // Calculate total salary
    salary = value * hour;

    // Display employee ID and salary
    printf("\nEmployees ID = %s\n", id);
    printf("Salary = Rs. %.2lf\n", salary);
    return 0;
}
