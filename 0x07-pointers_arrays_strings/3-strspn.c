#include "main.h"

/**
* _strspn - get length of a prefix substring
*
*@s: iimtial segment
*@accept: source ..
*
* Return: Always 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;

	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}

			else if (accept[i + 1] == '\0')
			{
				return (byte);
			}
		}
		s++;
	}
	return (byte);
}
