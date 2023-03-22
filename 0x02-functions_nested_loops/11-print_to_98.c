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
		_putchar(n);
		if (n == 98)
		{
			continue;
		}
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		n++;
	}
}
