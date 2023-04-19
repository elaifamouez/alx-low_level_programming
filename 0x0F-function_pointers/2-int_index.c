#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int *p;
if (array != NULL && size > 0 && cmp != NULL)
{
if (size <= 0)
return (-1);
for (p = array; p < array + size; p++)
{
if (cmp(*p))
{
return (p - array);
}
}
}
return (-1);
}
