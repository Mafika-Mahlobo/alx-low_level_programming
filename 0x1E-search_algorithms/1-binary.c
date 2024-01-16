#include "search_algos.h"

/**
* binary_search - searches for a value in an array using binary search
* @array: pointer to the first value of an array
* @size: number of elements in the array
* @value: value to search for
* Return: index of array where value is found
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (size - 1);
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = (mid + 1);

		else
			right = (mid - 1);
	}
	return (-1);
}

/**
* print_array - prints the array every time it changes
* @array: pointer to an array to print
* @start: index to start printing from
* @end: index of last element to print
* Return: None
*/

void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		if (start == end)
			printf("%d\n", array[start]);
		else
			printf("%d, ", array[start]);
		start++;
	}
}
