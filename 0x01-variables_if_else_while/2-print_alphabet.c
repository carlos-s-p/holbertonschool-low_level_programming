#include <stdlib.h>

/**
 * main - prints the alphabet
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 97;

	while ((n >= 97) && (n <= 122))
	{
	putchar(n);
	n++;
	}
	putchar(13);
	return (0);
}

