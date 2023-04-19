#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the ops of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*ad)(int, char **) = main, b, i = 0;
unsigned char op;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
b = atoi(argv[1]);
while (i < b)
{
op = *(unsigned char *)ad;
printf("%.2x", op);
if (i != b - 1)
putchar(' ');
ad++;
i++;
}
printf("\n");
return (0);
}
