#include <stdio.h>

int main(void)
{
    int *uninitialized_ptr; // declared but not initialized

    /* 
     * WARNING: uninitialized pointers contain garbage addresses.
     * Using them (dereferencing) can cause undefined behavior,
     * crashes, or segmentation faults, because they may point
     * to memory we don’t own.
     */

    printf("Value of uninitialized_ptr: %p\n", (void *)uninitialized_ptr);

    // Initialize to NULL for safety
    uninitialized_ptr = NULL;

    if (uninitialized_ptr == NULL)
        printf("After initializing to NULL: uninitialized_ptr is NULL.\n");

    return 0;
}
