#include "main.h"

/**
* puts2 - write every character of a string
*
*@str: string to be printed
*
* Return: No return value
*/
void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
