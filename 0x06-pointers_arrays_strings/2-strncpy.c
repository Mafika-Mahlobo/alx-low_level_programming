#include "main.h"

/**
* *_strncpy - copy a string
*
*@dest: string
*@src: string to be appended
*@n: number of digits form src string
*
* Return: Always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
