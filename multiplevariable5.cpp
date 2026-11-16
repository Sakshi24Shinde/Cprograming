
#include <stdio.h>

int main()
{
    int id = 101;
    char name[] = "Sakshi";
    int age = 20;
    float marks = 88.50;
    char grade = 'A';

    // Display heading
    printf("%-10s %-15s %-10s %-10s %-10s\n",
        "ID", "Name", "Age", "Marks", "Grade");

    printf("-------------------------------------------------------\n");

    // Display variables in columnar format
    printf("%-10d %-15s %-10d %-10.2f %-10c\n",
        id, name, age, marks, grade);

    return 0;
}
