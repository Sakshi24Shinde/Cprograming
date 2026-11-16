
#include <stdio.h>

int main()
{
    char id[11];
    double salary, usd, eur;

    // Input employee ID
    printf("Enter Employee ID: ");
    scanf_s("%10s", id, (unsigned)sizeof(id));

    // Input salary in INR
    printf("Enter Monthly Salary (Rs.): ");
    scanf_s("%lf", &salary);

    // Convert INR into USD and EUR
    usd = salary / 85.0;
    eur = salary / 98.0;

    // Display salary in different currencies
    printf("\n-----------------------------------\n");
    printf("Employee ID: %s\n", id);
    printf("-----------------------------------\n");

    printf("Salary in INR: Rs. %.2lf\n", salary);
    printf("Salary in USD: $ %.2lf\n", usd);
    printf("Salary in EUR: EUR %.2lf\n", eur);

    printf("-----------------------------------\n");

    return 0;
}
