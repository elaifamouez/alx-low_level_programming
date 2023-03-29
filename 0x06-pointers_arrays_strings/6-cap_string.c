#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
int i, len;
size_t j;
int capitalize_next = 1;
char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
for (j = 0; j < 13; j++)
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
