#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - simplified custom printf function
 * @format: format string containing specifiers
 *
 * Description:
 * Supports %c (char), %i (int), and %s (string).
 * Does NOT handle flags, width, precision, or other specifiers.
 *
 * Return: Nothing (void)
 */
void _printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    char c;
    int num;
    char *str;

    va_start(args, format);

    while (format && format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;

            switch (format[i])
            {
                case 'c':
                    c = (char)va_arg(args, int);
                    putchar(c);
                    break;

                case 'i':
                    num = va_arg(args, int);
                    printf("%d", num);
                    break;

                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(null)";
                    fputs(str, stdout);
                    break;

                default:
                    putchar('%');
                    putchar(format[i]);
                    break;
            }
        }
        else
        {
            putchar(format[i]);
        }

        i++;
    }

    va_end(args);
}
