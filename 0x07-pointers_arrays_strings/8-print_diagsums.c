#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints og two diagonal of a square
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;

for (i = 0, j = size - 1; i < size; i++, j--)
{
sum1 += a[i*size + i];
sum2 += a[i*size + j];
}

printf("%d, %d\n", sum1, sum2);
}
