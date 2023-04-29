#include <stdio.h>

/**
* first - prints message before main executes
* Return: No return value
*/

void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
