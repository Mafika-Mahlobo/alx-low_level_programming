#include "main.h"

/**
 * print_to_98 - print natural numnbers from n to 98
 *
 * @n: user input
 *
 * Return: No return value
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 98)
		{
			_putchar(48 + n);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(48 + n);
		}
		_putchar('\n');
	}
}
