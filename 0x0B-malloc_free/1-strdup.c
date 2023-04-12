#include <stdlib.h>

/**
* _strdup -  returns pointer to memory address if string
*@str: string
* Return: Always 0
*/
char *_strdup(char *str)
{
	char *p;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (; str[r]; r++)
		p[r] = str[r];

	return (p);
}
