#include "main.h"

/**
* _puts_recursion - print string followed by new line
*
*@s: pointer to string
*
* Return:No return value
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
