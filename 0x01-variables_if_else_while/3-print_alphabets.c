#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabet lowercase and UPPERCASE
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 97;

	int nm = 65;

	while ((n >= 97) && (n <= 122))
	{
	putchar(n);
	n++;
	}
	while ((nm >= 65) && (nm <= 90))
	{
	putchar(nm);
	nm++;
	}
	putchar(13);
	return (0);
}
