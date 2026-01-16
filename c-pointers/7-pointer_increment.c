#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr = &num;

    printf("Initial address: %p\n", (void *)ptr);

    ptr++; // increment pointer

    printf("Address after increment: %p\n", (void *)ptr);

    /* 
    Explanation:
    When we increment an int pointer, it does not move by 1 byte.
    It moves by sizeof(int) bytes (usually 4 bytes on most systems)
    because the pointer arithmetic accounts for the size of the data type
    it points to. This ensures that the pointer points to the next integer
    in memory, not just the next byte.
    */

    printf("(Address increased by %zu bytes, which is sizeof(int) on this system)\n", sizeof(int));

    return 0;
}
