#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of possible data types for passed args
* Return: No return value
*/
void print_all(const char * const format, ...)
{
	int i = 0;

	char *string, *separator = "";

	va_list args;

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator,  va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);

					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator,  string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}

