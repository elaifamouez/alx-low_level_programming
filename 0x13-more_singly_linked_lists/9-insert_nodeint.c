#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index, preserving list
 * @head: head of list
 * @idx: index to put node at
 * @n: integer data for new node
 *
 * Return: pointer to new node at specified index, NULL if not found
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *current = *head;
unsigned int i;

if (!(*head) || !head)
return (NULL);
newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(newNode);
return (NULL);
}
current = current->next;
}
newNode->next = current->next;
current->next = newNode;
return (newNode);
}
