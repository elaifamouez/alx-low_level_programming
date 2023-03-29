#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @str: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
int i;
unsigned int j;
int capitalize_next = 1;
char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < sizeof(separators) / sizeof(separators[0]); j++)
{
if (str[i] == separators[j])
{
capitalize_next = 1;
break;
}
}
if (capitalize_next)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
capitalize_next = 0;
}
}
return (str);
}
