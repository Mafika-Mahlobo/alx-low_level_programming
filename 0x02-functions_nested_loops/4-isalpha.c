#include "main.h"

/**
* _isalpha - check if input is uppercase or lowercase
*
* @c: input from user
*
* Return: Always 0 (Success)
*
*/
int _isalpha(int c)
{
	if ((c > 98 && c < 123) || (c >= 65 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
