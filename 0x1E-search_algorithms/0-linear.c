#include "search_algos.h"

/**
* linear_search - searches for integer in an array using linear search
* @array: pointer to firt array value
* @size: number of elements in an array
* @value: value to search
* Return: index of value found (-1 if not found)
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
