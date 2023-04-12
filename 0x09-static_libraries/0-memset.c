#include "main.h"

/**
 *  _memset - fill n bytes of memory with a constant value
 *  @s: pointer to memory area
 *  @b: constant value
 *  @n: number of bytes to fill
 *  Return: a pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while(n--)
*p++ = b;
return (s);
}