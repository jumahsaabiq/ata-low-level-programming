// This program demonstrates the use of C keywords.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    const int limit = 1;  // const = keyword, int = keyword
    int i;                // int = keyword

    if (limit == 1)       // if = keyword
    {
        for (i = 0; i < limit; i++)   // for = keyword
        {
            printf("Keywords are powerful\n");
        }
    }

    return 0;             // return = keyword
}
