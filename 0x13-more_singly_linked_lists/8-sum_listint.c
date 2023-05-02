#include "lists.h"

/**
 * sum_listint - sums the n value of a linked list of listint_t
 * @head: head of list
 *
 * Return: integer represetnting sum of all n values from list
 */
int sum_listint(listint_t *head)
{
int sum = 0, i;

if (!head)
return (0);
for (i = 0; head != NULL; i++)
{
sum += head->n;
head = head->next;
}
return (sum);
}
