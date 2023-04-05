#include "main.h"
#define NULL 0

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
return (*s == '\0' ? 0 : (_strlen_recursion(s + 1) + 1));
}
