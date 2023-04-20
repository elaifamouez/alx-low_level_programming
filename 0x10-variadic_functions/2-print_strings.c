#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ch;
char *str;
unsigned int i;

va_start(ch, n);
separator = separator ? separator : "";
for (i = 0; i < n; i++)
{
str = va_arg(ch, char*);
printf("%s", str ? str : "(nil)");
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ch);
}
