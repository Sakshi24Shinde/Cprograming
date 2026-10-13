#include <stdio.h>

int main(void)
{
    int age;
    int registered;

    printf("Enter your age: ");
    scanf_s("%d", &age);

    if (age >= 18)
    {
        printf("Are you registered? Enter 1 for Yes, 0 for No: ");
        scanf_s("%d", &registered);

        if (registered == 1)
        {
            printf("You meet these voting requirements.");
        }
        else
        {
            printf("Registration is required.");
        }
    }
    else
    {
        printf("You are not yet eligible by age.");
    }

    return 0;
}
