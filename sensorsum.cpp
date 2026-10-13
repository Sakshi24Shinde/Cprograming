#include <stdio.h>

void main()
{
    int sensor1, sensor2, sum;

    printf("Enter Sensor 1 Value: ");
    scanf_s("%d", &sensor1);

    printf("Enter Sensor 2 Value: ");
    scanf_s("%d", &sensor2);

    sum = sensor1 + sensor2;

    printf("Sum of Sensor Values: %d", sum);

    getchar();
}
