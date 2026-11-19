
#include <stdio.h>

int main()
{
    char str1[80], str2[80];
    char* p, * q;
    int count = 0;

    printf("Enter a string: ");
    scanf_s("%79s", str2, (unsigned)sizeof(str2));

    p = str1;
    q = str2;

    // Copy string using pointers
    while (*q != '\0')
    {
        *p = *q;
        p++;
        q++;
        count++;
    }

    *p = '\0';

    printf("\nCopied string: %s", str1);
    printf("\nNumber of characters = %d\n", count);

    return 0;
}
