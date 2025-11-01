#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

int main(void)
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets if present
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    int len = _strlen_recursion(str);
    printf("The length of \"%s\" is: %d\n", str, len);

    return 0;
}
