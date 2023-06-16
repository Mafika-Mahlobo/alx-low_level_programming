#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - frees linked list
* @head: pointer to head of linked list
* Return: None
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
