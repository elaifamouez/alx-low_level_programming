#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _mul - multiplies two positive numbers and displays it
 * @num1: The first number to be multiplied.
 * @num2: The second number to be multiplied.
 * 
 * Return: void. 
 */
void _mul(char *num1, char *num2)
{
int len1 = _strlen(num1), len2 = _strlen(num2), i, j;
int *result;

result = calloc(len1 + len2, sizeof(int));
for (i = len1 - 1; i >= 0; i--)
for (j = len2 - 1; j >= 0; j--)
result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
for (i = len1 + len2 - 1; i > 0; i--)
if (result[i] >= 10)
{
result[i - 1] += result[i] / 10;
result[i] %= 10;
}
for (i = result[0] == 0 ? 1 : 0; i < len1 + len2; i++)
_putchar(result[i] + '0');
_putchar('\n');
}
/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
_print_error();
}
else
{
 _mul(argv[1], argv[2]);
}
return (0);
}
