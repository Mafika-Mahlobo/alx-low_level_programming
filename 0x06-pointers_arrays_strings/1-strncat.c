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
	int i, destln = 0, srcln = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destln++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcln++;
	}

	for (i = 0; i < n; i++)
	{
		dest[destln + 1] = src[i];
	}
	return (dest);
}
