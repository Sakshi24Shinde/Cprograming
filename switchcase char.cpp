
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character (M, T, W, F): ");
    scanf_s(" %c", &ch);

    switch (ch)
    {
    case 'M':
        printf("Monday");
        break;

    case 'T':
        printf("Tuesday");
        break;

    case 'W':
        printf("Wednesday");
        break;

    case 'F':
        printf("Friday");
        break;

    default:
        printf("Invalid character");
    }

    return 0;
}
