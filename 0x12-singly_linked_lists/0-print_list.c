#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - print all elements of liked list (list_t)
* @h: poiter to struct (to define nodes)
* Return: Always 0
*/

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
