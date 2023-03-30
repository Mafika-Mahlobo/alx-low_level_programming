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
	int i, k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
