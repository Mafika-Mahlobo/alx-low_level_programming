#include "main.h"

/**
* *_memcpy -  copy memory area
*
*@dest: destination to compyt to
*@src: memory area
*@n: number of areas to be copied
*
* Return: Always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}
