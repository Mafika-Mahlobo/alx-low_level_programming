#include "hash_tables.h"

/**
* *hash_table_create - creates a hash table
* @size: size of array
* Return: Pointer to created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t *) * size);

	return (new_table);
}
