
#include <stdio.h>

int main()
{
    int amount, i;
    int notes[] = { 500, 200, 100, 50, 20, 10 };

    printf("Enter withdrawal amount: ");
    scanf_s("%d", &amount);

    if (amount <= 0 || amount % 10 != 0)
    {
        printf("Invalid withdrawal amount!");
        return 0;
    }

    printf("\nATM Cash Dispensing:\n");

    for (i = 0; i < 6; i++)
    {
        if (amount >= notes[i])
        {
            printf("%d note(s) of Rs.%d\n",
                amount / notes[i], notes[i]);

            amount = amount % notes[i];
        }
    }

    printf("\nWithdrawal Successful!");

    return 0;
}
