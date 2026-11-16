
#include <stdio.h>

int main()
{
    char id[11];
    int hours, overtime;
    double rate, salary, overtimePay, grossSalary;

    // Input employee ID
    printf("Enter Employee ID: ");
    scanf_s("%10s", id, (unsigned)sizeof(id));

    // Input working hours
    printf("Enter total working hours: ");
    scanf_s("%d", &hours);

    // Input hourly rate
    printf("Enter hourly rate (Rs.): ");
    scanf_s("%lf", &rate);

    // Calculate salary and overtime
    if (hours > 40)
    {
        overtime = hours - 40;
        salary = 40 * rate;
        overtimePay = overtime * rate * 1.5;
    }
    else
    {
        salary = hours * rate;
        overtimePay = 0;
    }

    // Calculate gross salary
    grossSalary = salary + overtimePay;

    // Display results
    printf("\nEmployee ID = %s\n", id);
    printf("Normal Salary = Rs. %.2lf\n", salary);
    printf("Overtime Pay = Rs. %.2lf\n", overtimePay);
    printf("Gross Salary = Rs. %.2lf\n", grossSalary);

    return 0;
}
