#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **gr, i, j;

if (width <= 0 || height <= 0)
return (NULL);
gr = (int **)malloc(sizeof(int *) * height);
if (!gr)
{
free(gr);
return (NULL);
}
for (i = 0; i < height; i++)
{
gr[i] = malloc(width * sizeof(int));
if (gr[i] == NULL)
{
for (i--; i >= 0; i--)
free(gr[i]);
free(gr);
return (NULL);
}
}
for (i = 0, j = 0; i < height * width; i++, j++)
{
if (j == width)
j = 0;
gr[i / width][j] = 0;
}
return (gr);
}
