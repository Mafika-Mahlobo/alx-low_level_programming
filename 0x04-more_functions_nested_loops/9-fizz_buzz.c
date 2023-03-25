#include <stdio.h>

/**
* main - print 1 to 100..
*
* Return: No return value
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5 == 0))
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i  != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
