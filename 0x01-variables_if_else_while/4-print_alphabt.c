#include <stdlib.h>

/**
 * main - prints the alphabet without the letters 'e' and 'q'
 *
 * Return: Returns 0
 */
int main(void)
{
	int n = 97;

	while ((n >= 97) && (n <= 122))
	{
	if ((n != 101) && (n != 113))
	{
	putchar(n);
	}
	n++;
	}
	putchar(13);
	return (0);
}
