#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
size_t l;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
l = 0;
while (str[l] != '\0')
l++;
new->len = l;
new->next = NULL;
tmp = *head;
if (tmp == NULL)
{
*head = new;
}
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
}
return (*head);
}
