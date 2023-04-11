#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *copy;
unsigned int i = 0, l = 0;
if (!str)
return (NULL);
while (str[i])
i++;
copy = (char *)malloc(sizeof(char) * (i + 1));
if (!copy)
return (NULL);
for (l = 0; l <= i; l++)
copy[l] = str[l];
copy[i] = '\0';
return (copy);
}
