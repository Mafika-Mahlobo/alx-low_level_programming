#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_numbers - prints number using variadic func
* @separator: string to separate numbers
* @n: number of integers
* Return: Always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int val = va_arg(args, int);

		printf("%d", val);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);

	}
	va_end(args);
	printf("\n");
}

