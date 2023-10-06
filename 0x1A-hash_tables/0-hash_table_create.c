#include "hash_tables.h"

/**
* *hash_table_create - creates a hash table
* @size: size of array
* Return: Pointer to created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;

	hash_table_t *new_array = malloc(sizeof(hash_table_t));

	if (new_array == NULL)
		return (NULL);

	new_array->size = size;
	new_array->array = malloc(sizeof(hash_table_t) * size);

	if (new_array->array == NULL)
	{
		free(new_array->array);
		return (NULL);
	}

	for (; i < size; i++)
		new_array->array[i] = NULL;

	return (new_array);
}
