#include <stdio.h>

/**
 * main - print number of base 10 from 0
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
