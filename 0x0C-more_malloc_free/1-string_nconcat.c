#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to new space in memory or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int i, l;

if (!s1)
s1 = "";
if (!s2)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
s3 = malloc(sizeof(char) * (i + n + 1));
if (!s3)
return (NULL);
l = 0;
for (i = 0; s1[i]; i++)
s3[l++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
s3[l++] = s2[i];
s3[l] = '\0';
return (s3);
}
