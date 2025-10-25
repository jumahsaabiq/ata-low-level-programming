#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    
    // Validate input type
    if (scanf("%d", &n) != 1) {
        return 1; // invalid input, not integer
    }

    // Gracefully handle zero or negative inputs
    if (n <= 0) {
        printf("Sum of natural numbers up to %d is: 0\n", n);
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
