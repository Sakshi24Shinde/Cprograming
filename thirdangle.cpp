
#include <stdio.h>

int main()
{
    int ang1, ang2, ang3;

    printf("Enter two angles of triangle: ");
    scanf_s("%d %d", &ang1, &ang2);

    ang3 = 180 - (ang1 + ang2);

    printf("Third angle of the triangle: %d\n", ang3);

    return 0;
}
