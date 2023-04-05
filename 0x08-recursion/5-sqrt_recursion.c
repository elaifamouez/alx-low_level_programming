#include "main.h"

/**
 * _sqrt_check - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @i: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int _sqrt_check(int n, int i)
{
return (i * i > n ? -1 : i * i == n ? i : _sqrt_check(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
return (n < 0 ? -1 : _sqrt_check(n, 0));
}
