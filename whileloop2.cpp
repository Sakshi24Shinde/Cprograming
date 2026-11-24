
#include <stdio.h>

int main()
{
    int start, end, i;

    printf("Enter starting range: ");
    scanf_s("%d", &start);

    printf("Enter ending range: ");
    scanf_s("%d", &end);

    printf("\nEven numbers in ascending order:\n");

    i = start;
    while (i <= end)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n\nOdd numbers in descending order:\n");

    i = end;
    while (i >= start)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        i--;
    }

    return 0;
}
