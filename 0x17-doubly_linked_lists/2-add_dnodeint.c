#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - add nodes at the start of a linked list
* @head: pointer to head of list
* @n: value to add
* Return: Always 0
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
