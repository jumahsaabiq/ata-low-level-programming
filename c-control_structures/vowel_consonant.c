#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        return 1; // input error
    }

    // Check if it's an alphabet letter
    if (isalpha(ch)) {
        // Convert to lowercase for easier comparison
        char lower = tolower(ch);

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    }
    // No output for digits or special characters

    return 0;
}

