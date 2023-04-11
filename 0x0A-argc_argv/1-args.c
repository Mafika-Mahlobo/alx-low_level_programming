#include <stdio.h>
#include "main.h"

/**
* main - print number of arguments passed
*
*@argc: number of arguments
*@argv: array of strings (arguments)
*
* Return: Always 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
