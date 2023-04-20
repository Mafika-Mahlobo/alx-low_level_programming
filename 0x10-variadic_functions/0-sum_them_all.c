#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - returns sum of integers
* @n: number of integers
* Return: Always 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int val = va_arg(args, int);

		sum += val;
	}
	va_end(args);

	return (sum);
}
