#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint - prints elements of doubly linked list
* @h: pointer to head of linked list
* Return: number of elements (size_t)
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
