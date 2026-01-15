#include <stdio.h>

int main(void)
{
    int x = 50;       // integer variable
    int *ptr = &x;    // pointer storing address of x

    printf("Original value of x: %d\n", x);
    printf("Value accessed via pointer: %d\n", *ptr);

    return 0;
}
