#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t)), *lastNode = *head;

if (newNode != NULL)
{
newNode->n = n;
newNode->next = NULL;
}
else
return (NULL);
if (*head != NULL)
{
for (; lastNode->next != NULL; lastNode = lastNode->next)
{
}
lastNode->next = newNode;
}
else
*head = newNode;
return (*head);
}
