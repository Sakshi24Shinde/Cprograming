#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");

    if (scanf_s("%d %d", &a, &b) != 2)
    {
        printf("Invalid input!");
        return 1;
    }

    if (a > b)
    {
        printf("%d is larger.\n", a);
    }
    else if (b > a)
    {
        printf("%d is larger.\n", b);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}