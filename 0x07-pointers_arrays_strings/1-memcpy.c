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
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
