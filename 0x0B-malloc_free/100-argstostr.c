#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: pointer to array of size ac
 * Return: NULL to ac == 0 or av == null, pointer to new string
 * NULL on fail
 */
char *argstostr(int ac, char **av)
{
int i, j, k, l;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0, j = 0, l = 0; i < ac && av[i]; j++, l = (j == 0 ? l : l + 1))
{
if (av[i][j] == '\0')
{
i++;
j = -1;
continue;
}
l++;
}
s = malloc((l + 1) * sizeof(char));
if (!s)
return (NULL);
for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
{
s[k] = av[i][j];
}
s[k++] = '\n';
}
s[k] = '\0';
return (s);
}
