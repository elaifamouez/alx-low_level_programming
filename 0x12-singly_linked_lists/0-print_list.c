#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints a linked list
 * @h: head of list
 *
 * Return: number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
size_t node_count  = 0;

tmp = h;
while (tmp != NULL)
{
printf("[%u] ", tmp->len);
(!tmp->str) ? printf("[0] (nil)\n") : printf("[%i] %s\n", h->len, h->str);
tmp = tmp->next;
node_count++;
}
return (node_count);
}
