int _putchar(char c);
/**
 * print_alphabet_x10 - writes the alphabet 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	int i;

	int j;

	int impre;

	for (i = 0; i <= 9; i++)
	{
	for (j = 97; j <= 123; j++)
	{
	if (j != 123)
	{
	impre = j;
	}
	else
	{
	impre = 10;
	}
	_putchar(impre);
	}
	}
}
