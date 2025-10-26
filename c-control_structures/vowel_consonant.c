#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        return 1; // invalid input
    }

    // Check if character is a letter
    if (!isalpha(ch)) {
        return 0; // do nothing for digits or special characters
    }

    // Check for vowels using logical OR
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}
