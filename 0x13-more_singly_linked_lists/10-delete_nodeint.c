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
listint_t *temp = *head, *nextNode;
	
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
nextNode = (*head)->next;
free(*head);
*head = nextNode;
return (1);
}
while (temp)
{
if (i + 1 == index)
{
nextNode = temp->next;
temp->next = nextNode->next;
free(nextNode);
return (1);
}
temp = temp->next;
i++;
}
return (-1);
}
