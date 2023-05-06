#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_binary - print binary representation of integer
* @n: integer to be converted
* Return: Always 0
*/

void print_binary(unsigned long int n)
{
	int start = 0;

	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			start = 1;
			_putchar('1');
		}
		else if (start == 1)
		{
			_putchar('0');
		}

		mask = mask >> 1;
	}

	if (start == 0)
		_putchar('0');
}
