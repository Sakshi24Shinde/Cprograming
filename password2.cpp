
#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    char correctPassword[] = "12345";
    int attempts = 0;
    int success = 0;

    printf("===== PASSWORD VALIDATION =====\n");

    while (attempts < 3)
    {
        printf("\nEnter password: ");
        scanf_s("%19s", password, (unsigned)sizeof(password));

        if (strcmp(password, correctPassword) == 0)
        {
            printf("\nPassword is correct!\n");
            printf("Access Granted.\n");
            success = 1;
            break;
        }
        else
        {
            attempts++;
            printf("\nIncorrect password!\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    }

    if (success == 0)
    {
        printf("\nMaximum attempts exceeded!\n");
        printf("User account is LOCKED.\n");
        printf("Access Denied.\n");
    }

    return 0;
}
