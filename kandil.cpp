
#include <stdio.h>

int main()
{
    int i, j, n = 7;

    // Top hanging thread
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
            printf(" ");
        printf("|\n");
    }

    // Top decorative cap
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Lantern body - upper section
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 2 * n + 1; j++)
        {
            if (j == 1 || j == 2 * n + 1)
                printf("*");
            else if (j == i + 2 || j == 2 * n - i)
                printf("O");
            else if (i == 1 || i == 5)
                printf("=");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Decorative middle section
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 2 * n + 1; j++)
        {
            if (j == 1 || j == 2 * n + 1)
                printf("*");
            else if (j == n - i + 1 || j == n + i + 1)
                printf("*");
            else if (j == n + 1)
                printf("@");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lantern body - lower section
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n + 1; j++)
        {
            if (j == 1 || j == 2 * n + 1)
                printf("*");
            else if (j == i + 2 || j == 2 * n - i)
                printf("O");
            else if (i == 1 || i == 5)
                printf("=");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Bottom decorative point
    for (i = 3; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Hanging tassel
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < n; j++)
            printf(" ");
        printf("| |\n");
    }

    for (j = 0; j < n - 1; j++)
        printf(" ");
    printf("\\|/\n");

    return 0;
}
