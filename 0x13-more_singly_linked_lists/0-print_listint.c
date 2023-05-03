#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - print all elements of liked list (list_t)
* @h: poiter to struct (to define nodes)
* Return: Always 0
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
