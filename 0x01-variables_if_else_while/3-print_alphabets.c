#include <stdio.h>

/**
 * main - print alphabet in lowercaase, then uppercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 97;

	int n = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
