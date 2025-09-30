// This program prints the ASCII values of characters in a string.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    char str[] = "Hello";
    int i = 0;

    printf("String: %s\n", str);
    printf("ASCII values:\n");

    while (str[i] != '\0')
    {
        printf("%c: %d\n", str[i], str[i]);
        i++;
    }

    return 0;
}
