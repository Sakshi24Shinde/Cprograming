
#include <stdio.h>

int main()
{
    int a, b, c;
    int max, min;

    // Accept three numbers
    printf("Enter three integers: ");
    scanf_s("%d %d %d", &a, &b, &c);

    // Find maximum value
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    // Find minimum value
    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    // Display results
    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
