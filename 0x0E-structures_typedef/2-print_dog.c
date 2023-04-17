#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: ");
d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
printf("Age: ");
d->age < 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
printf("Owner: ");
d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
}
}
