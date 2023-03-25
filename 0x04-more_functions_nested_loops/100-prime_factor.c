#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* main -  print lagerst prime factor of a number
*
* Return: Always 0 (Success)
*/
int main(void)
{

	long x, maxf;

	long num = 612852475143;

	long s = sqrt(num);

	for (x = 1; x <= s; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
