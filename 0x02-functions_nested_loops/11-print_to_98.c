#include <stdio.h>
int _putchar(char c);
/**
* print_to_98 - function that evaluates the values to 98
* @n: parameter integer type
*/

void print_to_98(int n)
{
	int i;

	int direc;

	int diff;

	diff = (98 - n);

	if (diff > 0)
	{
	direc = 1;
	}
	else if (diff < 0)
	{
	direc = -1;

	}
	else
	{
	direc = 0;

	}
	i = n;
	while (i != 98)
	{
	printf("%d, ", i);

		if (direc == 1)
		{
		i++;
		}
		if (direc == -1)
		{
		i--;
		}
	}

	printf("%d\n", i);

}

