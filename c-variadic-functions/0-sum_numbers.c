#include <stdarg.h>

/**
 * sum_all - sums an arbitrary number of integers
 * @count: the number of integers passed
 *
 * Return: the sum of all integers provided
 */
int sum_all(int count, ...)
{
    va_list args;
    int i, sum = 0;

    va_start(args, count);

    for (i = 0; i < count; i++)
        sum += va_arg(args, int);

    va_end(args);

    return sum;
}
