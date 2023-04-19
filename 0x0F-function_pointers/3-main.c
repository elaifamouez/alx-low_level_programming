#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int (*p)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
p = get_op_func(argv[2]);
if (!p)
{
printf("Error\n");
exit(99);
}
printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
return (0);
}
