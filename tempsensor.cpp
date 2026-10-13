#include <stdio.h>

int main(void)
{
    float temperature;

    printf("Enter temperature in Celsius: ");
    scanf_s("%f", &temperature);

    if (temperature >= 40)
    {
        printf("WARNING: High temperature!");
    }
    else if (temperature >= 30)
    {
        printf("Temperature is warm.");
    }
    else
    {
        printf("Temperature is normal.");
    }

    return 0;
}
