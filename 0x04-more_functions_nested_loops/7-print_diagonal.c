#include "main.h"

/**
* print_diagonal - print diagonal line on terminal
*
*@n: length (integer)
*
* Return: No return value
*/
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}

