#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - adds element at the and of a linked list
* @head: pointer to head of a linked list
* @n: value to be added
* Return: Always 0
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = temp;
		temp->prev = current;
	}

	return (temp);
}
