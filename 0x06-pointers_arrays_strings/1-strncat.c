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
char *ptr = dest;
int i;  

while (*ptr != '\0')
{
ptr++;
}  
i = 0;
while (*src != '\0' && i < n)
{
*ptr = *src;
ptr++;
src++;
i++;
}
*ptr = '\0';
return (dest);
}
