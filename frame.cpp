
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == 1 || i == 6 || j == 1 || j == 10)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
