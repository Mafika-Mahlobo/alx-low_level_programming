#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - print last digit of a number in a variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lsd = n % 10;

	if (lsd > 5)
	{
		printf("Last digit of %d id %d and is greater than 5\n", n, lsd);
	}
	else if (lsd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsd);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, lsd);
	}

	return (0);
}
