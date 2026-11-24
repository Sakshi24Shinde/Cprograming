#include <stdio.h>  // Include the standard input/output header file.

void main()
{
    char sing_ch;  // Declare a variable to store a single character.

    printf("Input any alphabet : ");  // Prompt user for input.  
    scanf_s("%c", &sing_ch);  // Read and store the character input.

    if (sing_ch == 'a' || sing_ch == 'e' || sing_ch == 'i' || sing_ch == 'o' || sing_ch == 'u' || sing_ch == 'A' || sing_ch == 'E' || sing_ch == 'I' || sing_ch == 'O' || sing_ch == 'U')
    {
        printf("The alphabet is a vowel.\n");  // Print message for vowel.
    }
    else if ((sing_ch >= 'a' && sing_ch <= 'z') || (sing_ch >= 'A' && sing_ch <= 'Z'))
    {
        printf("The alphabet is a consonant.\n");  // Print message for consonant.
    }
    else
    {
        printf("The character is not an alphabet.\n");  // Print message for non-alphabet character.
    }
}
