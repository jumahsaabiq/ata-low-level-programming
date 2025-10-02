/**
 * main - the main function
 * description: Opens a file named quote.txt in write mode and writes
 *              a motivational quote into it using fputs
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    FILE *fp;

    /* Open file in write mode */
    fp = fopen("quote.txt", "w");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    /* Write the quote into the file */
    fputs("The journey of a thousand miles begins with a single step.\n", fp);

    /* Close the file */
    fclose(fp);

    return 0;
}
