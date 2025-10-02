/**
 * main - the main function
 * description: Reads the user's name with fgets,
 *              removes the newline if present,
 *              and greets the user.
 * return: 0
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL)
    {
        /* Remove newline character if present */
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n')
        {
            name[len - 1] = '\0';
        }

        printf("Hello, %s", name);
    }

    return 0;
}
