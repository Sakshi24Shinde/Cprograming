
#include <stdio.h>

int main()
{
    int amt, i;
    int notes[] = { 100, 50, 20, 10, 5, 2, 1 };

    printf("Input the amount: ");
    scanf_s("%d", &amt);

    printf("There are:\n");

    for (i = 0; i < 7; i++)
    {
        printf("%d Note(s) of %d.00\n", amt / notes[i], notes[i]);

        amt = amt % notes[i];
    }

    return 0;
}
