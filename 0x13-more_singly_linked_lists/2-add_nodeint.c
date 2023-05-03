
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - add new node to linked list
* @head: poiter to poiter (poiting to first element of list)
* @n: integer value to be added
* Return: Always 0
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (*head != NULL)
		node->next = *head;
	else
		node->next = NULL;

	*head = node;
	return (*head);
}
