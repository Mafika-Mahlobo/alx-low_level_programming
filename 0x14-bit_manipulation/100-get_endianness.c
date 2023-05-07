#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_endianness - checks indianness of host machine
* Return: Always 0
*/

int get_endianness(void)
{
	int n = 0x01;

	char *byte;

	byte = (char *)&n;
	if (*byte == 0x02)
		return (0);
	else
		return (1);
}
