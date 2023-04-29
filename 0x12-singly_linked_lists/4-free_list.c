#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees every note in a linked list
* @head: pointer to first node if liked list
* Return: Always 0
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
