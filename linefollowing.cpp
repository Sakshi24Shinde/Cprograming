#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SIZE 10

int path[11][11] = { 0 };

void displayCar(int x, int y)
{
    system("cls");

    printf("\n       AUTONOMOUS CAR NAVIGATION\n");
    printf("       RED = CAR | YELLOW = PATH | GREEN = GOAL\n\n");

    for (int j = SIZE; j >= 0; j--)
    {
        printf("%2d |", j);

        for (int i = 0; i <= SIZE; i++)
        {
            if (i == x && j == y)
            {
                printf("\033[1;31m C \033[0m");
            }
            else if (i == 10 && j == 10)
            {
                printf("\033[1;32m G \033[0m");
            }
            else if (path[i][j] == 1)
            {
                printf("\033[1;33m * \033[0m");
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }

    printf("   +");
    for (int i = 0; i <= SIZE; i++)
        printf("---");

    printf("\n    ");

    for (int i = 0; i <= SIZE; i++)
        printf("%2d ", i);

    printf("\n\nCar Position: (%d,%d)\n", x, y);
    printf("Final Goal: (10,10)\n");
}

void moveCar(int* x, int* y, int targetX, int targetY)
{
    while (*x != targetX)
    {
        path[*x][*y] = 1;

        if (*x < targetX)
            (*x)++;
        else
            (*x)--;

        displayCar(*x, *y);
        Sleep(300);
    }

    while (*y != targetY)
    {
        path[*x][*y] = 1;

        if (*y < targetY)
            (*y)++;
        else
            (*y)--;

        displayCar(*x, *y);
        Sleep(300);
    }

    path[*x][*y] = 1;

    displayCar(*x, *y);
    Sleep(700);
}

int main(void)
{
    int x = 0, y = 0;
    int coordX[3], coordY[3];

    printf("AUTONOMOUS CAR NAVIGATION\n");
    printf("Final Goal is fixed at (10,10)\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter coordinate %d (X Y): ", i + 1);
        scanf_s("%d %d", &coordX[i], &coordY[i]);

        if (coordX[i] < 0 || coordX[i] > 10 ||
            coordY[i] < 0 || coordY[i] > 10)
        {
            printf("Invalid coordinate!\n");
            return 0;
        }
    }

    path[0][0] = 1;

    displayCar(x, y);
    Sleep(1000);

    // Visit three intermediate coordinates
    for (int i = 0; i < 3; i++)
    {
        moveCar(&x, &y, coordX[i], coordY[i]);
    }

    // Automatically move to final goal
    moveCar(&x, &y, 10, 10);

    printf("\n\033[1;32mFINAL GOAL REACHED!\033[0m\n");
    printf("Destination: (10,10)\n");

    return 0;
}