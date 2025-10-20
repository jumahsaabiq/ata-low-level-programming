#include <stdio.h>
#include <stdlib.h>

/**
 * main - reads an integer from stdin and prints whether it is positive,
 * negative, or zero. For invalid (non-integer) input the program exits
 * with a non-zero code and prints nothing.
 * return: 0 on success, 1 on invalid input
*/

int main(void)
{
    long long number;

    /* Read from stdin without printing any prompt text */
    if (scanf("%lld", &number) != 1)
        return 1; /* invalid input */

    if (number > 0)
        printf("%lld is a positive number.\n", number);
    else if (number < 0)
        printf("%lld is a negative number.\n", number);
    else
        printf("%lld is zero.\n", number);

    return 0;
}
