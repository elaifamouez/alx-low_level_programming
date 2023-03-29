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
char *p = dest;
int dest_len = 0;
int i = 0;

while (*p != '\0')
{
dest_len++;
p++;
}
while (i < n && src[i] != '\0') {
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
