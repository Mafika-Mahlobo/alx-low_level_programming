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
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
