#include "main.h"

/**
* print_triangle - print triangle on console
*
* @size: size of triangle
*
* Return: No return value
*/
void print_triangle(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
