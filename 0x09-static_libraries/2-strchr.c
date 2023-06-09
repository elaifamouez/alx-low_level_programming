#include "main.h"
#define NULL 0

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{

while (*s != '\0' && *s != c)
{
s++;
}
return ((*s == c) ? s : NULL);
}
