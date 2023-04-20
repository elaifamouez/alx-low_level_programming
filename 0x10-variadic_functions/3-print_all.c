#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
char *str = va_arg(s, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
va_list l;
int i = 0, j=0;

va_start(l, format);
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
print_c(l);
j = 0;
break;
case 'i':
print_i(l);
j = 0;
break;
case 'f':
print_f(l);
j = 0;
break;
case 's':
print_s(l);
j = 0;
break;
default:
j = 1;
break;
}
if (format[i + 1] != '\0' && j == 0)
printf(", ");
i++;
}
printf("\n");
va_end(l);
}
