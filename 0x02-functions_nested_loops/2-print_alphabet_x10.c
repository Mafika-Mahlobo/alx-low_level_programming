#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10 in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n, i;

	for (n = 1; n < 11; n++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
