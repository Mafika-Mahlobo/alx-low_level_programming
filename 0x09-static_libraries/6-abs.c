#include "main.h"

/**
 * _abs - compute the absolute value of an interger
 *
 * @n: user input (interger)
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
