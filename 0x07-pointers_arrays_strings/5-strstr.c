#include "main.h"
#include <stdio.h>

/**
* _strstr - locate a substring
*
*@haystack: string or input
*@needle: output or substring
*
* Return: Always 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
