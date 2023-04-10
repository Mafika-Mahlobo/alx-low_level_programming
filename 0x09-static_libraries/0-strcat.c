#include "main.h"

/**
* *_strcat - concatinate tow strings
*
*@src: first string
*@dest: second string
*
* Return: Always 0
*/
char *_strcat(char *dest, char *src)
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

	for (i = 0; i < srcln; i++)
	{
		dest[destln + i] = src[i];
	}

	return (dest);
}
