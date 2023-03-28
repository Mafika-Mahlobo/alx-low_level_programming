#include "main.h"
#include <stdio.h>

/**
* print_array - print n elements of an array
*
*@a: pointer to an array to be printed
*@n: number of elements to be printed
*
* Return: No return value
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
