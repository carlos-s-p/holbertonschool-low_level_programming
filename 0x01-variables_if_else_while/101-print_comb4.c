#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints combinations of three digits, not repeated
 *
 * Return: Returns 0
 */
int main(void)
{

	int j = 48;

	int i;

	int a;

	while (j < 57)
	{
	i = j;
	while (i <= 57)
	{
	if (i != j)
	{
	a = i;
	while (a <= 57)
	{

	if ((j != i) && (a != i))
	{
	putchar(j);
	putchar(i);
	putchar(a);

	if (j <= 54)
	{
	putchar(32);
	putchar(44);
	}

	}
	a++;
	}
	}
	i++;
	}
	j++;
	}
	putchar(13);
	return (0);
}
