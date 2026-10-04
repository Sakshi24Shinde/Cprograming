#include <stdio.h>

void main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf_s("%d %d", &a, &b);

    sum = a + b;

    printf("Addition = %d", sum);
}