#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
char *arg = argv[i];
while (*arg)
{
if (!isdigit(*arg))
{
printf("Error\n");
return (1);
}
arg++;
}
sum += atoi(argv[i]);
}
return (sum ? printf("%d\n", sum) : printf("0\n"));
}
