#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - insert node at specific index on linke list
* @head: pointer to first node of linkd list
* @idx: index to insert a node
* @n: value to be inserted
* Return: Always 0
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;

	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (*head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (i < idx)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}


	return (NULL);
}
