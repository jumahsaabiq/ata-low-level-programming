#include <stdio.h>

/**
 * gcd - tail-recursive function to compute the GCD of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: greatest common divisor of a and b
 *
 * Explanation:
 * This function uses the Euclidean algorithm:
 * gcd(a, b) = gcd(b, a % b), with the base case gcd(a, 0) = a.
 *
 * Tail Recursion Note:
 * --------------------
 * A tail-recursive function makes its recursive call as the last operation
 * in the function. This allows compilers to apply **Tail Call Optimization (TCO)**,
 * which reuses the same stack frame for each recursive call instead of creating
 * new ones. This drastically reduces stack usage and prevents stack overflow
 * for deep recursion, effectively making recursion as efficient as iteration.
 */
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); /* Tail-recursive call */
}

int main(void)
{
    int x, y;

    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);

    printf("The GCD of %d and %d is: %d\n", x, y, gcd(x, y));

    return 0;
}
