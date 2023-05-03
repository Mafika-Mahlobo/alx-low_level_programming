#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees every note in a linked list
* @head: pointer to first node if liked list
* Return: Always 0
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
