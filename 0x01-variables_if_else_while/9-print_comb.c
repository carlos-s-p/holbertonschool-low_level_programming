#include <stdlib.h>

/**
 * main - prints 1 combinations of the digits base 10, separated by commas
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 48;

	while ((n >= 48) && (n <= 57))
	{
	putchar(n);
	n++;
	if (n != 58)
	{
	putchar(44);
	}
	}
	putchar(13);
	return (0);
}

