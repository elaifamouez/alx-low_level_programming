#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
char *p = dest;

while(*p)
p++;
while((*p++ = *src++))
;
return (dest);
}
