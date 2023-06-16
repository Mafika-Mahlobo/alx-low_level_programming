#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at specific index
* @head: head of linked list
* @index: index
* Return: Always 1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i  = 0;

	while (current != NULL)
	{
		if (i == index)
			free(current);
		current = current->next;
		i++;
	}

	*head = current;
	return (i);
}
