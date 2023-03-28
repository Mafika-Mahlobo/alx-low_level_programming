#include "main.h"

/**
* *_strcpy - copy string
*
*@dest: destination to copy to
*@src: source to copy from
*
* Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
