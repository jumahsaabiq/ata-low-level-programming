#include <stdio.h>

int main(void)
{
    int *uninitialized_ptr = NULL; // Initialize to NULL for safety

    /*
     * Originally, if a pointer is declared but not initialized,
     * it may contain a random address (garbage value), which is dangerous.
     * Dereferencing it can cause undefined behavior or segmentation faults.
     *
     * Here, we safely initialize it to NULL before using it.
     */

    printf("Value of uninitialized_ptr: %p\n", (void *)uninitialized_ptr);

    // Confirm pointer is NULL
    if (uninitialized_ptr == NULL)
        printf("After initializing to NULL: uninitialized_ptr is NULL.\n");

    return 0;
}
