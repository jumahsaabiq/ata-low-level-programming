/**
 * main - the main function
 * description: Asks the user for their name and prints a greeting
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    char name[100];  /* buffer to store the user's name */

    printf("Enter your name: ");
    scanf("%99s", name);  /* read user input safely */

    printf("Hello, %s!\n", name);

    return 0;
}
