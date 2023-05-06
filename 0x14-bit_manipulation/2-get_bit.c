#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_bit - returns value of a bit at given index
* @n: input integer
* @index: index in input integer
* Return: Always 0
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
