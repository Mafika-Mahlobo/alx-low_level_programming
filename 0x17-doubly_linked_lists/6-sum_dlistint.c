#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - returns sum of linked list values
* @head: pointer to head of linke list
* Return: sum of values (int)
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
