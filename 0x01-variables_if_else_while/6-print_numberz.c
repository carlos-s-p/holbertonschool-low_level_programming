#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the digits base 10
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
	}
	putchar(13);
	return (0);
}

