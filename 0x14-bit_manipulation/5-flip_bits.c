#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* flip_bits - return number of bits needed to flip to get to anoner number
* @n: integer value
* @m: number of bits
* Return: Always 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, count = 0;

	xor = n ^ m;
	while (xor)
	{
		count++;
		xor = xor & (xor - 1);
	}

	return (count);
}
