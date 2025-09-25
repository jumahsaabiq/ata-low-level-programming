// This program demonstrates declaring and printing variables in C.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    int age = 20;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);

    return 0;
}
