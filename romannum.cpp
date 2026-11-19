#include <stdio.h>

int main()
{
    int i, x;

    // Print the header of the Roman numeral table
    printf("Decimal  Roman\n");
    printf("number   numeral\n");
    printf("-------------------\n");

    // Loop through numbers from 1 to 100
    for (i = 1; i <= 100; i++)
    {
        x = i; // Store current value of i in x
        printf("%d        ", x); // Print the decimal number

        // Convert decimal number to Roman numeral
        if (x == 100) {
            printf("C"); // Print Roman numeral for 100
            x = 0; // Reset x to 0
        }
        if (x >= 50) {
            printf("L"); // Print Roman numeral for 50
            x -= 50; // Subtract 50 from x
        }
        while (x >= 10) {
            printf("X"); // Print Roman numeral for 10
            x -= 10; // Subtract 10 from x
        }
        if (x >= 5) {
            if (x % 10 == 9) {
                printf("IX"); // Print Roman numeral for 9
                x -= 9; // Subtract 9 from x
            }
            else {
                printf("V"); // Print Roman numeral for 5
                x -= 5; // Subtract 5 from x
            }
        }
        while (x > 0)
        {
            if (x % 10 == 4) {
                printf("IV"); // Print Roman numeral for 4
                x -= 4; // Subtract 4 from x
            }
            else {
                printf("I"); // Print Roman numeral for 1
                x -= 1; // Subtract 1 from x
            }

        }
        printf("\n"); // Move to the next line for the next number
    }

    return 0;
}

