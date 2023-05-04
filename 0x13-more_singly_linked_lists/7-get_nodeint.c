#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns a  node at nth index
* @head: pointer to first node of linked list
* @index: index of node to return
* Return: Always 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  i = 0;

	listint_t *temp;

	temp = head;

	while (head != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);
	else
		return (temp);

}
