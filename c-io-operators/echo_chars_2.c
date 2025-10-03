/**
 * main - the main function
 * description: Reads characters using getchar and echoes them with putchar
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter text (press Enter to stop): ");

    while ((ch = getchar()) != '\n')
    {
        putchar(ch);
    }

    putchar('\n'); /* Ensure output ends with newline */

    return 0;
}
