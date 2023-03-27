#include <stdio.h>
#include "main.h"

/**
* print_rev - print string in reverse
*
*@s: string (user input)
*
* Return: No return value
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
