#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list l;
unsigned int i;

va_start(l, n);
separator = separator ? separator : "";
for (i = 0; i < n; i++)
{
printf("%d", va_arg(l, int));
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(l);
}
