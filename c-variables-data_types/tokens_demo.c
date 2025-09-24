// This program demonstrates tokens in C by declaring variables and printing their values.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    int number = 25;       // int = keyword, number = identifier, = = operator, 25 = literal, ; = punctuation
    float decimal = 15.7;  // float = keyword, decimal = identifier, = = operator, 15.7 = literal, ; = punctuation
    char letter = 'A';     // char = keyword, letter = identifier, = = operator, 'A' = literal, ; = punctuation

    printf("Integer: %d\n", number);
    printf("Float: %.1f\n", decimal);
    printf("Char: %c\n", letter);

    return 0;
}
