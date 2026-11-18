#include <stdio.h>
int main() {
    int a, i, j = 1, x = 0;

    // Prompt for user input
    printf("Input number of lines: ");
    scanf_s("%d", &a);

    // Loop for each line
    for (i = 1; i <= a; i++) {
        // Print i, i squared, and i cubed
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}
