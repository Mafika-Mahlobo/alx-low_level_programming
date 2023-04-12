#include <stdlib.h>

/**
* create_array - creates array of char & initialize it with char
*@size: size of array
*@c: character to initialize 'size'
* Return: Always 0
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

}

