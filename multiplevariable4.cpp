
#include <stdio.h>

int main()
{
    int a = 125;
    float b = 12.5;
    double c = 123.456;
    char d = 'A';
    short e = 25;
    long f = 123456789;

    // Display values and memory addresses

    printf("Integer value = %d\n", a);
    printf("Address of integer = %p\n\n", (void*)&a);

    printf("Float value = %f\n", b);
    printf("Address of float = %p\n\n", (void*)&b);

    printf("Double value = %lf\n", c);
    printf("Address of double = %p\n\n", (void*)&c);

    printf("Character value = %c\n", d);
    printf("Address of character = %p\n\n", (void*)&d);

    printf("Short value = %hd\n", e);
    printf("Address of short = %p\n\n", (void*)&e);

    printf("Long value = %ld\n", f);
    printf("Address of long = %p\n", (void*)&f);

    return 0;
}
