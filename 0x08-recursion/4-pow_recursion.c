#include "main.h"

/**
* _pow_recursion -  return value of x rased to the power y
*
*@x: value of x
*@y: value of y
*
* Return: Always 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
