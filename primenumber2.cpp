
#include <stdio.h>

int main()
{
    int limit, row, i, j, count = 0;

    printf("Enter the limit: ");
    scanf_s("%d", &limit);

    printf("Enter numbers per row: ");
    scanf_s("%d", &row);

    printf("\nPrime numbers are:\n");

    for (i = 2; i <= limit; i++)
    {
        int prime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%5d", i);
            count++;

            if (count % row == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
