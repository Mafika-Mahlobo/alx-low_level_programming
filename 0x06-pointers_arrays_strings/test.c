#include <stdio.h>

int main(void)
{
	char str = 'Lookup!';

	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			printf("%c", str[i]);
		}
	}
	printf('\n');
	return (0);
}
