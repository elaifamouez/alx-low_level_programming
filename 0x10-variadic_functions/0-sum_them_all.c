#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list l;
int s = 0;
unsigned int i;

s = (n == 0) ? 0 : s;
va_start(l, n);
for (i = 0; i < n; i++)
s += va_arg(l, int);
va_end(l);
return (s);
}
