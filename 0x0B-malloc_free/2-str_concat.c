#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *ch, *s3;
unsigned int i, l = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
l++;
ch = malloc(sizeof(char) * l);
if (!ch)
return (NULL);
s3 = ch;
while (*s1)
*s3++ = *s1++;
while ((*s3++ = *s2++))
     ;
return (ch);
}
