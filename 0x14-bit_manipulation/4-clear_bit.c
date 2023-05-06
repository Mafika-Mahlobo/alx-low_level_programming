#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* clear_bit - cleares bit at given index
* @n: pointer to integer
* @index: index in integer
* Return: Always 0
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n & ~mask;

	return (1);
}
