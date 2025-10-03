/**
 * main - the main function
 * description: Uses the write system call to print a message
 *              to standard output and to a file named write.txt.
 * return: 0 on success, 1 on error
*/
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
    const char *message = "Coding in C is powerful!\n";
    int fd;

    /* Write to standard output */
    write(STDOUT_FILENO, message, strlen(message));

    /* Open file write.txt for writing (create if not exist, truncate if exist) */
    fd = open("write.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        write(STDERR_FILENO, "Error opening file\n", 19);
        return 1;
    }

    /* Write the message to the file */
    write(fd, message, strlen(message));

    /* Close the file */
    close(fd);

    return 0;
}
