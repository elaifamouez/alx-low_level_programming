#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 *
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{

while (*s != '\0' && *s != c)
{
s++;
}
if (*s == c)
{
return ((char*)s);
}
else
{
return (NULL);
}
}
