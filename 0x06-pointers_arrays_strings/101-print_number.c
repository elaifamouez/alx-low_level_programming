#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 *
 * Return: no return.
 */
void print_number(int n)
{
int absolute_value, digit, digit_count;


if (n < 0)
{
_putchar('-');
absolute_value = -n;
}
else
{
absolute_value = n;
}
digit = absolute_value;
digit_count = 1;
while (digit > 9)
{
digit /= 10;
digit_count *= 10;
}
for (; digit_count >= 1; digit_count /= 10)
{
_putchar(((absolute_value / digit_count) % 10) + 48);
}
}
