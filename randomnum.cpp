
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, input;

    srand(time(NULL));

    number = rand() % 10 + 1;

    do
    {
        printf("\nGuess the number (1 to 10): ");
        scanf_s("%d", &input);

        if (number > input)
        {
            printf("The number is higher!\n");
        }
        else if (number < input)
        {
            printf("The number is lower!\n");
        }

    } while (number != input);

    printf("\nThat is correct!\n");

    return 0;
}
