#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void) {

int a = 1, b = 2, c = 0, i;

printf("%d, %d", a, b);
for (i = 3; i <= 98; i++) {
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
