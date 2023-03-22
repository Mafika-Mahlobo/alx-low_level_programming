#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @i: user input (number)
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int las;

	las = i % 10;
	if (las < 0)
	{
		_putchar(-las + 48);
		return (-las);
	}
	else
	{
		_putchar(las + 48);
		return (las);
	}
}
