#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - removes node element of linked list
* @head: pointer to first node of linked list
* Return: Always 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int temp_num;

	if (head == NULL || *head == NULL)
		return (0);

	temp_num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (temp_num);
}
