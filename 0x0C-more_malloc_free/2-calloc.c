#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i, j;

if (!nmemb || !size)
return (NULL);
p = malloc(size * nmemb);
if (!p)
return (NULL);
for (i = 0; i < nmemb; i++)
{
for (j = 0; j < size; j++)
{
*(p + i * size + j) = 0;
}
}
return (p);
}
