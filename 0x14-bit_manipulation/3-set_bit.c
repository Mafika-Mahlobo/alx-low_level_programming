#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit - set bit to 1 at given index
* @n: pointer to integer
* @index: index in a integer
* Return: Always 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
