
#include <stdio.h>

int main()
{
    int width, height;
    int area, perimeter;

    // Ask user to enter height and width
    printf("Enter the height of rectangle: ");
    scanf_s("%d", &height);

    printf("Enter the width of rectangle: ");
    scanf_s("%d", &width);

    // Calculate perimeter
    perimeter = 2 * (height + width);
    printf("Perimeter of the rectangle = %d inches\n", perimeter);

    // Calculate area
    area = height * width;
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
}
