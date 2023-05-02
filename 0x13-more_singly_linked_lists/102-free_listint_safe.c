#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t i, num = 0, j;
listint_t **list = NULL, **newlist;
listint_t *next;

if (h == NULL || *h == NULL)
return (num);
while (*h != NULL)
{
for (i = 0; i < num; i++)
{
if (*h == list[i])
{
*h = NULL;
free(list);
return (num);
}
}
num++;
newlist = malloc(num *sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (j = 0; j < num - 1; j++)
newlist[j] = list[j];
newlist[j] = *h;
free(list);
next = (*h)->next;
free(*h);
*h = next;
}
free(list);
return (num);
}
