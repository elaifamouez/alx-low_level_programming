#include "main.h"
#define NULL 0

#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
char *c = &haystack[i];
for (j = 0; needle[j] != '\0'; j++)
{
if (c[j] != needle[j])
break;
}
if (needle[j] == '\0')
return (c);
}
return (NULL);
}
