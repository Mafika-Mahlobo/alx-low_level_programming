#include <stdio.h>
#include "main.h"

/**
* _puts - print string in stdout
*
*@str: user input
*
* Return: No return value
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
