
#include <stdio.h>

int main()
{
    int i;

    // Top line
    for (i = 1; i <= 1; i++)
    {
        printf("    ######\n");
    }

    // Second line
    for (i = 1; i <= 1; i++)
    {
        printf("  ##      ##\n");
    }

    // Middle lines
    for (i = 1; i <= 5; i++)
    {
        printf(" #\n");
    }

    // Bottom second line
    for (i = 1; i <= 1; i++)
    {
        printf("  ##      ##\n");
    }

    // Last line
    for (i = 1; i <= 1; i++)
    {
        printf("    ######\n");
    }

    return 0;
}
