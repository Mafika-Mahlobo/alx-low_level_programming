#include "main.h"

/**
* print_square - print squre on terminal
*
*@size: size of the square (integer)
*
* Return: No return value
*/
void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
