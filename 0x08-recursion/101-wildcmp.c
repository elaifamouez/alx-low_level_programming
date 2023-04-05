#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered identical.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: If the strings can be considered identical - 1.
 *         If the strings are not identical - 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2 && *s1 != '\0')
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
return (1);
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
}
return (0);
}
