/**
 * fibonacci - returns the nth Fibonacci number using recursion
 * @n: the position in the Fibonacci sequence
 * Return: the nth Fibonacci number
 */
int fibonacci(int n)
{
    if (n < 0)
        return -1; /* optional: handle invalid input */
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
