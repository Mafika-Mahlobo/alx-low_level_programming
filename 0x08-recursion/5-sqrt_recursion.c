#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - return natural square root of a number
*
*@n: number
*
* Return: Always 0
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - return square root of a number
*
*@n: number
*@i: number of iteration
*
* Return: Always 0
*/

int _sqrt(int n, int i)
{
	int sqrt =  i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
