#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i, j;

if (!nmemb || !size)
return (NULL);
p = malloc(size * nmemb);
if (!p)
return (NULL);
for (i = 0; i < nmemb; i++)
{
for (j = 0; j < size; j++)
{
*(p + i * size + j) = 0;
}
}
return (p);
}
/**
 * check_number - checks if string has only
 *                numbers
 *
 * @str: string to check
 *
 * Return: 0 is true 1 if false
*/
int check_number(char *str)
{
while (*str != '\0')
{
if (*str < '0' || *str > '9')
return (1);
str++;
}
return (0);
}
/**
 * _length - get the length of strings
 *
 * @str: string to get length of
 *
 * Return: length of string
*/
int _length(char *str)
{
int i = 0;

while (str[i] != '\0')
i++;
return (i);
}
/**
 * _mul - multiplies two positive numbers and displays it
 * @num1: The first number to be multiplied.
 * @num2: The second number to be multiplied.
 * 
 * Return: void. 
 */
void _mul(char *s1, char *s2)
{
int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
char *ptr;
void *temp;

l1 = _length(s1);
l2 = _length(s2);
tmp = l2;
total_l = l1 + l2;
ptr = _calloc(sizeof(int), total_l);
temp = ptr;
for (l1--; l1 >= 0; l1--)
{
f_digit = s1[l1] - '0';
res = 0;
l2 = tmp;
for (l2--; l2 >= 0; l2--)
{
s_digit = s2[l2] - '0';
res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
ptr[l1 + l2 + 1] = res % 10;
res /= 10;
}
if (res)
ptr[l1 + l2 + 1] = res % 10;
}
while (*ptr == 0)
{
ptr++;
total_l--;
}
for (i = 0; i < total_l; i++)
printf("%i", ptr[i]);
printf("\n");
free(temp);
}
/**
 * main - Entry point
 *
 * Description: a program that multiplies
 *            two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on faliure
*/
int main(int argc, char *argv[])
{
char *n1 = argv[1];
char *n2 = argv[2];

if (argc != 3 || check_number(n1) || check_number(n2))
{
printf("Error\n");
exit(98);
}
if (*n1 == '0' || *n2 == '0')
{
_putchar('0');
_putchar('\n');
}
else
_mul(n1, n2);
return (0);
}
