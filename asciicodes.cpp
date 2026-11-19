
#include <stdio.h>

int main()
{
    char ch;
    int i, n;

    printf("------------------------------------------\n");
    printf("Character\tASCII\tBinary\n");
    printf("------------------------------------------\n");

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        n = ch;

        printf("%c\t\t%d\t", ch, n);

        for (i = 7; i >= 0; i--)
        {
            printf("%d", (n >> i) & 1);
        }

        printf("\n");
    }

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        n = ch;

        printf("%c\t\t%d\t", ch, n);

        for (i = 7; i >= 0; i--)
        {
            printf("%d", (n >> i) & 1);
        }

        printf("\n");
    }

    printf("------------------------------------------\n");

    return 0;
}
