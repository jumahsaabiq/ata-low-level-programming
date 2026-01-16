#include <stdio.h>

int main(void)
{
    int *ptr = NULL;      // initialize pointer to NULL

    // Check if pointer is NULL
    if (ptr == NULL)
        printf("ptr is NULL.\n");

    int valid_num = 15;
    ptr = &valid_num;     // assign valid address

    // Check again before dereferencing
    if (ptr != NULL)
        printf("ptr is NOT NULL. Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
