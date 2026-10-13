#include <stdio.h>

int main(void)
{
    int i, num;

    printf("Enter a number: ");
    scanf_s("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
