#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, gdistance; // Declare variables for coordinates and distance

    // Prompt user for coordinates (x1, y1) and store them
    printf("Input x1: ");
    scanf_s("%f", &x1);
    printf("Input y1: ");
    scanf_s("%f", &y1);

    // Prompt user for coordinates (x2, y2) and store them
    printf("Input x2: ");
    scanf_s("%f", &x2);
    printf("Input y2: ");
    scanf_s("%f", &y2);

    // Calculate squared distance between points
    gdistance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    // Calculate and print the distance between the points
    printf("Distance between the said points: %.4f", sqrt(gdistance));
    printf("\n");

    return 0;
}
