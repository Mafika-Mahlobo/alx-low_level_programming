#include <stdio.h>

/**
 * main - print alphabet in lowercase except for q and e
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
