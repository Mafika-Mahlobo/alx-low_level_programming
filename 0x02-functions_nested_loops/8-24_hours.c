#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: No return value
 */
void jack_bauer(void)
{
	int i, j, n, k;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (n = 0; n < 6; n++)
			{
				for (k = 0; k < 10; k++)
				{
					if (i >= 2 && j >= 4)
					{
						_putchar(i + 48);
						_putchar(j + 48);
						_putchar(58);
						_putchar(n + 48);
						_putchar(k + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
