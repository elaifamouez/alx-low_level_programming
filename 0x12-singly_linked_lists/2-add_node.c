#include "lists.h"
#include <stdio.h>
#include<string.h>

/**
 * add_node - adds a node to the head of a linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 *
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
size_t l = 0;

if (!str)
return (NULL);
newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);
newNode->str  = strdup(str);
while (str[l])
l++;
newNode->len = l;
newNode->next = *head;
*head = newNode;
return (*head);
}
