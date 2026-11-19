
#include <stdio.h>

int main()
{
    int i, j, count;

    printf("Prime numbers between 1 and 199 are:\n");

    for (i = 2; i < 199; i++)
    {
        count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
