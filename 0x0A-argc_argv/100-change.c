#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int num, i, j;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
return (0);
}
i = 0;
for (j = 0; j < 5 && num >= 0; j++)
{
for (; num >= coins[j]; i++)
{
num -= coins[j];
}
}
printf("%d\n", i);
return (0);
}
