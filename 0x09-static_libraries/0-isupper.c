#include <stdio.h>
#include "main.h"

/**
* _isupper - check for uppercase character
*
* @c: user input
*
* Return: Always 0 (Success)
*
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
