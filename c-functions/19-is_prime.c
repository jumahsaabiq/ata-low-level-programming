#include <stdio.h>

/* Function prototype */
int is_prime(int num);

/**
 * main - entry point
 * Description: Reads an integer and checks if it’s prime or not
 * Return: 0
 */
int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

/**
 * is_prime - checks if a number is prime
 * @num: the number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int num)
{
    int i;

    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;

    for (i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
