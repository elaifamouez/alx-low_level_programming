#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers from min to max.
* @min: minimum int in array
* @max: maximum int in array
* Return: pointer to array or null
**/
int *array_range(int min, int max)
{
int *p, i, s;

if (min > max)
return (NULL);
p = malloc(sizeof(*p) * ((max - min) + 1));
if (!p)
return (NULL);
s = (max - min) + 1;
for (i = 0; i < s && min <= max; i++, min++)
*(p + i) = min;
return (p);
}
