#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of a double linked list.
 *
 * @head: Double pointer to the the beginning of the double linked list.
 * @n: The value that the new node will contain.
 *
 * Return: The address of the new node, or NULL upon failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
