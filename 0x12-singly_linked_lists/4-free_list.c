#include "lists.h"

/**
 * free_list - frees all elements in a linked list
 * @head: pointer to head element of list
 *
 * Return: always void
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
head = NULL;
}
