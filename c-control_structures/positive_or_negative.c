#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter an integer: ");
    
    // Validate input
    if (scanf("%d", &num) != 1) {
        // Invalid input, exit with code 1
        return 1;
    }

    if (num > 0)
        printf("%d is a positive number.\n", num);
    else if (num < 0)
        printf("%d is a negative number.\n", num);
    else
        printf("%d is zero.\n", num);

    return 0;
}
