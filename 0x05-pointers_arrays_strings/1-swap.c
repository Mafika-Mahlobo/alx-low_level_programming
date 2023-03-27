#include "main.h"

/**
* swap_int - swap values of twon ints
*
*@a: poiter 1
*@b: pointer 2
*
* Return: No return value
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
