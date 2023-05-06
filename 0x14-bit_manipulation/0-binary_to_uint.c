#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* binary_to_uint - convert binary integer value to decimal
* @b: pointer to binary value (character)
* Return: Always 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int count = 0;

	if (b == NULL)
		return (0);

	while (b[count] == '0' || b[count] == '1')
	{
		res = res << 1;

		if (b[count] == '1')
			res = res | 1;

		count++;
	}

	if (b[count] != '\0')
		return (0);

	return (res);
}
