/**
 * main - the main function
 * description: Prints the lowercase English alphabet using putchar
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');

    return 0;
}
