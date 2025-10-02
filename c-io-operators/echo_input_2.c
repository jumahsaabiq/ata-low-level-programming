/**
 * main - the main function
 * description: Reads a line of text from the user with fgets
 *              and prints it back using fputs
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    char text[100];

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) != NULL)
    {
        fputs(text, stdout);
    }

    return 0;
}
