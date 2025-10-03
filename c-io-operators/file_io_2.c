/**
 * main - the main function
 * description: Demonstrates file I/O using fprintf, fputc, fscanf, and fgetc
 * return: 0
*/
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    FILE *fp;
    char word[50];
    int ch;

    /* Step 1: Open file in write mode */
    fp = fopen("data.txt", "w");
    if (fp == NULL)
        return 1;

    /* Step 2: Write line using fprintf */
    fprintf(fp, "C programming is fun");

    /* Step 3: Add ! using fputc */
    fputc('!', fp);

    fclose(fp);

    /* Step 4: Reopen file in read mode */
    fp = fopen("data.txt", "r");
    if (fp == NULL)
        return 1;

    /* Step 5: Read first word using fscanf */
    fscanf(fp, "%s", word);

    write(STDOUT_FILENO, "First word: ", 12);
    for (int i = 0; word[i] != '\0'; i++)
        putchar(word[i]);
    putchar('\n');

    /* Step 6: Read rest of file using fgetc */
    write(STDOUT_FILENO, "Rest of file: ", 14);
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    putchar('\n');

    fclose(fp);

    return 0;
}
