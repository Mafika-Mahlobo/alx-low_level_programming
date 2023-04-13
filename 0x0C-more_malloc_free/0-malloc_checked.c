#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocate memory
*@b:memory size to  be returned
* Return: Always 0
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
