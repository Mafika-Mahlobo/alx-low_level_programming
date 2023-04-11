#include <stdio.h>
#include "main.h"

/**
* main - print programe name
*
*@argc: argument count
*@argv: array of string (arguments)
*
* Return: Always 0
*/

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
