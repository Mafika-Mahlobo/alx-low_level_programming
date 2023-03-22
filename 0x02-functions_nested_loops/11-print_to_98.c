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
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n)
		}
		_putchar('\n');
	}
}
