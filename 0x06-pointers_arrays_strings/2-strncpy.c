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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
