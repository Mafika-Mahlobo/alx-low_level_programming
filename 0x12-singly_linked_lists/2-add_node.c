#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add new node to linked list
* @head: poiter to poiter (poiting to first element of list)
* @str: pointer to string (to be added)
* Return: Always 0
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int length = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);

	while (str[length] != '\0')
		length++;

	node->len = length;

	if (*head != NULL)
		node->next = *head;
	else
		node->next = NULL;

	*head = node;
	return (*head);
}
