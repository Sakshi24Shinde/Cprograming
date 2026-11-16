
#include <stdio.h>

int main()
{
    float x1, y1, x2, y2;
    float midX, midY;

    // Input coordinates of first point
    printf("Enter coordinates of first point (x1, y1): ");
    scanf_s("%f %f", &x1, &y1);

    // Input coordinates of second point
    printf("Enter coordinates of second point (x2, y2): ");
    scanf_s("%f %f", &x2, &y2);

    // Calculate midpoint
    midX = (x1 + x2) / 2;
    midY = (y1 + y2) / 2;

    // Display midpoint
    printf("\nMidpoint = (%.2f, %.2f)\n", midX, midY);

    return 0;
}
