#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100];
    char copy[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // remove newline

    int len = strlen(input);  // calculate length
    printf("Original string: \"%s\"\n", input);
    printf("Length of the string: %d\n", len);

    // Copy the string
    strcpy(copy, input);

    printf("Copied string: \"%s\"\n", copy);

    // C90-compatible for loop
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        // just an example if you wanted to iterate
    }

    return 0;
}
