#include "hash_tables.h"

/**
* key_index - uses the djb2 algorithm to create an index
* @key: key to be evaluated (user input)
* @size: the size of an array
* Return: index where data will be stores (in the array)
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
