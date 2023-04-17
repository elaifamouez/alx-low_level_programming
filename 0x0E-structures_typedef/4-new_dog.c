#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int i, j, k;
dog_t *dog;


dog = malloc(sizeof(dog_t));
if (dog == NULL || !(name) || !(owner))
return (NULL);
j = 0;
while (name[j] != '\0')
j++;
j++;
dog->name = malloc(j * (sizeof(char)));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
i = 0;
while (i < j)
{
dog->name[i] = name[i];
i++;
}
dog->age = age;
k = 0;
while (owner[k] != '\0')
k++;
k++;
dog->owner = malloc(k * (sizeof(char)));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < k; i++)
dog->owner[i] = owner[i];
return (dog);
}
