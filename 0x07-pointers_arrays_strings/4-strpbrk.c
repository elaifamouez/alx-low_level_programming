#include "main.h"
#define NULL 0

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *a;

for (; *s != '\0'; s++)
{
for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
return ((char*)s);
}
}
return (NULL);
}
