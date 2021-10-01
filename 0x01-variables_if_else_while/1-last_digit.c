#include <time.h>
/**
 * main - Prints if the last digit of a random number
 *
 * Return: Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;

	if (lastdigit < 0)
	lastdigit *= -1;
	if (lastdigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	else if ((lastdigit > 0) && (lastdigit < 6))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("%d and is 0", n, lastdigit);
	}
	return (0);
}
