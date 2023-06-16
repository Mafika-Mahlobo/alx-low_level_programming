#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - return node at specified index
* @head: pointer to head of linked list
* @index: index of not t be retrieved
* Return: node (dlistint_t)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	dlistint_t *node;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			node = current;

		current = current->next;
		i++;
	}

	if (node == NULL)
		return (NULL);

	return (node);
}
