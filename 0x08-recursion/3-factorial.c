#include "main.h"

/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
return (n < 0 ? -1 : n == 0 ? 1 : n * factorial(n - 1));
}
