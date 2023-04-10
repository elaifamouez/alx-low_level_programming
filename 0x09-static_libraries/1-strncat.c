#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 *
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *p_dest = dest;

while(*p_dest)
p_dest++;
while(n-- && *src)
*p_dest++ = *src++;
*p_dest = '\0';
return (dest);
}
