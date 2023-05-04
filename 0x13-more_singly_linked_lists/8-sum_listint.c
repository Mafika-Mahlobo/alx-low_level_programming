#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - return sum of all data in linked list
* @head: pointer to first node of linked list
* Return: Always 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	free(head);

	return (sum);
}
