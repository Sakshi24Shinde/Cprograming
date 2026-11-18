
#include <stdio.h>

int main()
{
    int a, i;

    printf("Input number of lines: ");
    scanf_s("%d", &a);

    printf("\n---------------------------------\n");
    printf(" Number\t\tSquare\t\tCube\n");
    printf("---------------------------------\n");

    for (i = 1; i <= a; i++)
    {
        printf(" %d\t\t%d\t\t%d\n", i, i * i, i * i * i);
    }

    printf("---------------------------------\n");

    return 0;
}
