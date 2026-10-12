
#include <stdio.h>

int main(void)
{
    int i;
    int distance;
    int stepDistance = 5;

    for (i = 1; i <= 10; i++)
    {
        distance = i * stepDistance;

        printf("Step %d: Distance = %d cm\n", i, distance);
    }

    printf("\nTotal distance travelled = %d cm\n",
        10 * stepDistance);

    return 0;
}
