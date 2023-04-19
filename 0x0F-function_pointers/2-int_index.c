#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for integer
* @array: array of integers to search
* @size: array size
* @cmp: pointer to function
* Return: Always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);

	}
	return (-1);
}
