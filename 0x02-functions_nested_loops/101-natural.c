#include <stdio.h>

/**
 * main - print multiples of 3 or 5 below 1024
 *
 * Return: No return value
 */
int main(void)
{
	int tot = 0;

	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			tot = tot + i;
		}
	}
	printf("%d", tot);
	printf("\n");
	return (0);
}
