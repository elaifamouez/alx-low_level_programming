#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 *
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *p = dest;
int i = 0;

if (n > 0)
{
while (i < n && src[i] != '\0')
{
*p = src[i];
p++;
i++;
}
}
while (i < n)
{
*p = '\0';
p++;
i++;
}
return (dest);
}
