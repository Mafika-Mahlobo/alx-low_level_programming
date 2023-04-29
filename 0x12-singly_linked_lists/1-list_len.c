#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns number of elements in a linked list
* @h: pointer to struct
* Return: Always 0
*/

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
