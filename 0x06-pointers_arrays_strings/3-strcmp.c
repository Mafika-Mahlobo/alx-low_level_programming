#include "main.h"

/**
* _strcmp - campare two integers
*
*@s1: integer 1
*@s2: integer 2
*
* Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
