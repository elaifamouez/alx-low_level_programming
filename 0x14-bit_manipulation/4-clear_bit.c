#include "main.h"
#define  BIT_SIZE 8

/**
 * clear_bit - sets bit to zero at index index
 * @n: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for ssucess -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int test, ans = 1;
int b = 2, p = index;

if (index > sizeof(n) * BIT_SIZE - 1)
return (-1);
while (p)
{
ans *= b;
p--;
}
test = ans;
*n = (*n & test) ? *n ^ test : *n;
return (1);
}
