#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100];  /* large enough buffer for concatenation */
    char s2[100];
    char str1[100];
    char str2[100];

    /* --- Concatenation --- */
    printf("Enter first string for concatenation: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; /* remove newline */

    printf("Enter second string for concatenation: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    strcat(s1, s2); /* concatenate s2 to s1 */
    printf("Concatenated string: %s\n\n", s1);

    /* --- Comparison --- */
    printf("Enter first string for comparison: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string for comparison: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
    {
        printf("\"%s\" and \"%s\" are equal.\n", str1, str2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are not equal.\n", str1, str2);
    }

    return 0;
}
