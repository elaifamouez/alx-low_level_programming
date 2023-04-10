#include "main.h"
#define NULL 0

/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
char *p;
unsigned int count = 0;

for (; *s != '\0'; s++)
{
for (p = accept; *p != '\0' && *p != *s; p++)
;
if (*p == '\0')
{
return (count);
}
count++;
}
return (count);
}
