#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: No return value
 */
void jack_bauer(void)
{
	int i, j, n, k;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (n = 0; n <= 5; n++)
			{
				for (k = 0; k <= 9; k++)
				{
					if (i >= 2 && j >= 4)
					{
						break;
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
