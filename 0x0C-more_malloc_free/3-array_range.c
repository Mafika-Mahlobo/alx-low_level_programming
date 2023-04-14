#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - reservea memory for array and return pointer to array
*@min: minimum value of array(inclusive)
*@max: maximum value of array(inclusive)
* Return: Always 0
*/
int *array_range(int min, int max)
{
	int *n, i = 0;

	if (min > max)
		return (NULL);

	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);

	while (min <= max)
	{
		n[i] = min;
		i++;
		min++;
	}
	return (n);
}
