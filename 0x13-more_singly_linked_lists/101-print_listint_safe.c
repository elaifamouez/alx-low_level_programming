#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i, num = 0, j;
const listint_t **list = NULL, **newlist;

while (head != NULL)
{
for (i = 0; i < num; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
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
newlist[j] = head;
free(list);
list = newlist;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (num);
}
