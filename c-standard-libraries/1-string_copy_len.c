#include <stdio.h>
#include <string.h>

/**
 * main - demonstrates strlen() and strcpy() from string.h
 *
 * Return: 0 on success
 */
int main(void)
{
    char input[100];
    char dest_string[100];
    size_t length;

    printf("Enter a string: ");
    fflush(stdout);

    fgets(input, sizeof(input), stdin);

    /* Remove trailing newline if present */
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
    }

    length = strlen(input);
    strcpy(dest_string, input);

    printf("Original string: \"%s\"\n", input);
    printf("Length of the string: %lu\n", (unsigned long)length);
    printf("Copied string: \"%s\"\n", dest_string);

    return 0;
}
