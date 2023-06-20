#include "main.h"

/**
* *_memset -  fill memory with constant byte
*
*@s: pointer to a variable
*@b: contant byte to fill memory with
*@n: number of memory location to fill
*
* Return: Always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] =  b;
	}
	return (s);
}
