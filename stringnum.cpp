#include <stdio.h>

int main()
{
    char str1[80], str2[80];
    int i;

    printf("Enter a string: ");
    scanf_s("%79s", str2, (unsigned)sizeof(str2));

    // Copy string from str2 to str1
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }

    str1[i] = '\0';

    // Display the result
    printf("\nOriginal string: %s", str1);
    printf("\nNumber of characters = %d\n", i);

    return 0;
}
