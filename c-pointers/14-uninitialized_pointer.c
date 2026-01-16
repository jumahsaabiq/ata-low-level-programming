#include <stdio.h>

int main(void)
{
    int *uninitialized_ptr;

    // Simulate uninitialized pointer with a dummy address
    uninitialized_ptr = (int *)0x7ffee1234567;

    printf("Value of uninitialized_ptr (random address): %p\n", (void *)uninitialized_ptr);

    // Now safely set it to NULL
    uninitialized_ptr = NULL;
    printf("After initializing to NULL: uninitialized_ptr is NULL.\n");

    return 0;
}
