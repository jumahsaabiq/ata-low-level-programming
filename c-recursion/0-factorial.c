/**
 * factorial - recursively calculates the factorial of a non-negative integer
 * @n: the integer whose factorial is to be calculated
 *
 * Return: the factorial of n
 */
long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
