
#include <stdio.h>

int main()
{
    int radius;
    float area, perimeter;

    // Ask user to enter radius
    printf("Enter the radius of the circle: ");
    scanf_s("%d", &radius);

    // Calculate perimeter
    perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the Circle = %f inches\n", perimeter);

    // Calculate area
    area = 3.14 * radius * radius;
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}
