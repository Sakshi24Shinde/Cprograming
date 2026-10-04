#include <stdio.h>

void main()
{
    int a, b, choice;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf_s("%d", &a);

    printf("Enter second number: ");
    scanf_s("%d", &b);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice: ");
    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition = %d", a + b);
        break;

    case 2:
        printf("Subtraction = %d", a - b);
        break;

    case 3:
        printf("Multiplication = %d", a * b);
        break;

    case 4:
        if (b != 0)
        {
            printf("Division = %.2f", (float)a / b);
        }
        else
        {
            printf("Error: Cannot divide by zero.");
        }
        break;

    default:
        printf("Invalid choice.");
    }
}