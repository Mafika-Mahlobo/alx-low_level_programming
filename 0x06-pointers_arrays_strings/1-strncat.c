#include "main.h"

/**
* *_strncat - append n digits of src to dest
*
*@dest: first string
*@src: second string
*@n: number of digits to append
*
* Return: Always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
