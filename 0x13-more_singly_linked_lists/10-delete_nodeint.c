#include "lists.h"

/**
 * delete_nodeint_at_index - deletes an element of linked list at index
 * @head: head of list
 * @index: index to delete node at
 *
 * Return: 1 if succeded, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp, *next;

if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
temp = *head;
while (i < index - 1 && temp != NULL)
{
temp = temp->next;
i++;
}
if (temp == NULL || temp->next == NULL)
return (-1);
next = temp->next;
temp->next = next->next;
free(next);
return (1);
}
