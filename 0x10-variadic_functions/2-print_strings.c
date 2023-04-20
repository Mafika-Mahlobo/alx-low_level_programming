#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_strings - prints string using variadic func
* @separator: string printed between strings
* @n: number of strings to print
* Return: No return value
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *string;

	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
