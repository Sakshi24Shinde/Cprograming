
#include <stdio.h>

int main(void)
{
    int angle;

    for (angle = 0; angle <= 180; angle += 30)
    {
        printf("Servo Angle: %d degrees\n", angle);
    }

    return 0;
}
