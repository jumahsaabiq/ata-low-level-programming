/**
 * main - the main function
 * description: Reads a single character from the user and prints its ASCII value
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  /* note the space before %c to skip whitespace */

    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
