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
	unsigned int i, n, val, chk;

	val = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		chk =  0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				val++;
				chk = 1;
			}
		}
	}
}
