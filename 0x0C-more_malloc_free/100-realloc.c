#include <stdlib.h>
#include "main.h"

/**
* *_realloc -  reallocates a memory block using malloc and free
* @ptr: void pointer
* @old_size: already allocated size
* @new_size: new size to allocate
* Return: pointer to newly allocated memory or null
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (!ptr)
ptr = malloc(new_size);
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
