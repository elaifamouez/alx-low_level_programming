#include "main.h"

/**
 * _check_div - Checks if a number is divisible.
 * @n: The number to be checked.
 * @i: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int _check_div(int n, int i)
{
return (n % i == 0 ? 0 : i == n / 2 ? 1 : _check_div(n, i + 1));	
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
return (n < 2 ? 0 : n == 2 ? 1 : _check_div(n, 2));
}
