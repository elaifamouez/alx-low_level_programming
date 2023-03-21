#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;

for (count = 0; count < 98; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);
if (count < 97)
printf(", ");
fib1 = fib2;
fib2 = sum;
}
printf("\n");
return (0);
}
