#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _strl - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strl(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
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
char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
{
for (i = 0; i < 6; i++)
{
_putchar(E[i]);
}
exit(98);
}
l1 = _strl(s1);
l2 = _strl(s2);
l = l1 + l2 + 1;
res = malloc(sizeof(int) * l);
if (!res)
return (1);
for (i = 0; i <= l1 + l2; i++)
res[i] = 0;
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
