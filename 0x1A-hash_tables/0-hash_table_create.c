#include "hash_tables.h"

/**
* *hash_table_create - creates a hash table
* @size: size of array
* Return: Pointer to created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
