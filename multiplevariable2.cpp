
#include <stdio.h>

int main()
{
    int a, b;
    long ax;
    short s;
    float x;
    double dx;
    char c;
    unsigned long ux;

    printf("Enter two integer values (a and b): ");
    scanf_s("%d %d", &a, &b);

    printf("Enter a long integer (ax): ");
    scanf_s("%ld", &ax);

    printf("Enter a short integer (s): ");
    scanf_s("%hd", &s);

    printf("Enter a float value (x): ");
    scanf_s("%f", &x);

    printf("Enter a double value (dx): ");
    scanf_s("%lf", &dx);

    printf("Enter a character (c): ");
    scanf_s(" %c", &c, 1);

    printf("Enter an unsigned long integer (ux): ");
    scanf_s("%lu", &ux);

    printf("\na + c = %d\n", a + c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("((int) dx) + ax = %ld\n", ((int)dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b = %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c = %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}
