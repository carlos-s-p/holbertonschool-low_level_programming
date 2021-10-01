#include <stdlib.h>

/**
 * main - prints combinations of two different digits, not equal
 *
 * Return: Returns 0
 */
int main(void)
{


	int i = 48;

	int a;

	while (i < 57)
	{

	a = i;
	while (a <= 57)
	{

	if (i != a)
	{

	putchar(i);
	putchar(a);
	if (i != 56)
	{
	putchar(44);
	putchar(32);
	}

	}
	a++;
	}
	i++;
	}
	putchar(13);
	return (0);

}

