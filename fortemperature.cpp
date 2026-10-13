#include <stdio.h>

int main(void)
{
    int i;
    int highCount = 0;
    float temperature;

    for (i = 1; i <= 5; i++)
    {
        printf("Enter temperature reading %d: ", i);
        scanf_s("%f", &temperature);

        if (temperature > 35.0)
        {
            highCount++;
            printf("High temperature warning!\n");
        }
        else
        {
            printf("Temperature is normal.\n");
        }
    }

    printf("\nHigh temperature readings = %d\n", highCount);

    return 0;
}
