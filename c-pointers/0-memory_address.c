#include <stdio.h>

int main(void)
{
    int myVar = 42;

    printf("Value of myVar: %d\n", myVar);
    printf("Address of myVar: %p\n", (void *)&myVar);

    return 0;
}
