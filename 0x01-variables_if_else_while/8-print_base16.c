#include <stdlib.h>

/**
 * main - prints the digits base 16
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 48;

	int a = 97;

	while ((n >= 48) && (n <= 57))
	{
	putchar(n);
	n++;
	}
	while ((a >= 97) && (a <= 102))
	{
	putchar(a);
	a++;
	}

	putchar(13);
	return (0);
}

