#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints name
* @name: name of user
* @f: pointer to function that prints name
* Return: No return value
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
