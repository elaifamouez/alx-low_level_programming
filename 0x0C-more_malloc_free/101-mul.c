#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int l1, l2, l, i, carry, d1, d2, *res, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
l1 = _strl(s1);
l2 = _strl(s2);
l = l1 + l2 + 1;
res = malloc(sizeof(int) * l);
if (!res)
return (1);
i = 0;
while (i <= l1 + l2)
{
res[i] = 0;
i++;
}
for (l1 = l1 - 1; l1 >= 0; l1--)
{
d1 = s1[l1] - '0';
carry = 0;
for (l2 = _strl(s2) - 1; l2 >= 0; l2--)
{
d2 = s2[l2] - '0';
carry += res[l1 + l2 + 1] + (d1 * d2);
res[l1 + l2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
res[l1 + l2 + 1] += carry;
}
i = 0;
while (i < l - 1)
{
if (res[i])
a = 1;
if (a)
_putchar(res[i] + '0');
i++;
}
if (!a)
_putchar('0');
_putchar('\n');
free(res);
return (0);
}
