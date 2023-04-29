#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds node at the end of a lined list
* @head: pointer to pointer (pointing to fisrt node of linked list)
* @str: pointer to string
* Return: Always 0
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;

	unsigned int length = 0;

	temp = *head;

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
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node;



	return (node);
}
