#include "main.h"
#include <stdio.h>

/**
* reverse_array -  reverse array of integers
*
*@a: array to be reversed
*@n: length of array
*
* Return: No return value
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = (n - 1); i >= 0; i--)
	{
		if (a[i] != 0)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
