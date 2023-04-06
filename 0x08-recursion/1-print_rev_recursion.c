#include "main.h"

/**
* _print_rev_recursion - print string in reverse
*
*@s: pointer to string
*
* Return: No return value
*/
void _print_rev_recursion(char *s)
{
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
	if (*s == '\0')
	{
		return;
	}
}
