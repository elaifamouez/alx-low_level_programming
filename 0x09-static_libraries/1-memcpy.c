#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: a pointer to the memory area to copy @src into.
 * @src: the source buffer to copy characters from.
 * @n: the number of bytes to copy from @src.
 *
 * Return: a pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p_dest = dest;
const char *p_src = src;

while(n--)
*p_dest++ = *p_src++;
return (dest);
}
