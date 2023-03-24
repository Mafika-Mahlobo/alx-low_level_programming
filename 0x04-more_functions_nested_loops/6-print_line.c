#include "main.h"

/**
* print_line - print straight line on terminal
*
* @n: length (integer)
*
* Return: No return value
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
