#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds node at the end of a lined list
* @head: pointer to pointer (pointing to fisrt node of linked list)
* @n: integer value to be added
* Return: Always 0
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node;



	return (node);
}
