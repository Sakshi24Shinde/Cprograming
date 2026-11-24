#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10];

    printf("Enter motor status (ON/OFF): ");
    scanf_s("%9s", ch, (unsigned)sizeof(ch));

    if (strcmp(ch, "ON") == 0)
    {
        printf("\nMotor is ON");
    }
    else if (strcmp(ch, "OFF") == 0)
    {
        printf("\nMotor is OFF");
    }
    else
    {
        printf("\nInvalid input");
    }

    return 0;
}

