
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;

    printf("Enter the number of lines: ");
    scanf_s("%d", &n);

    printf("\n------------------------------------------\n");
    printf("Number\t\tSquare Root\tSquare\n");
    printf("------------------------------------------\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t%.2f\t\t%d\n", i, sqrt(i), i * i);
    }

    printf("------------------------------------------\n");

    return 0;
}
