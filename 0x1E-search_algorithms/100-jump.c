#include "search_algos.h"

/**
* jump_search - searches for a value in an array using jump searh algo
* @array: pointer to first value of an array
* @size: length of array
* @value: value to search for
* Return: (int) index where value is found
*/

int jump_search(int*array, size_t size, int value)
{
	unsigned int prev = 0, current = 0, i;
	unsigned int jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, prev);
		prev = current;
		current += jump;
	}

	for (i = prev; i <= current; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
