#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_dnodeint_at_index - inserts node at specific index
* @h: pointer to linked list head
* @idx: index
* @n: value to be inserted
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int i = 0;

	if (node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(&node, n));

	node->n = n;
	current = *h;
	while (i < idx - 1 && current != NULL)
		current = current->next;

	if (current == NULL)
	{
		free(node);
		return (NULL);
	}

	node->prev = current;
	node->next = current->next;
	if (current->next != NULL)
		current->next->prev = node;
	current->next = node;

	return (node);
}
