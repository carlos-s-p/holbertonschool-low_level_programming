int _putchar(char c);
/**
 * print_alphabet - Prnints the alphabet
 *
 */
void print_alphabet(void)
{

	int i;

	int impre;

	for (i = 97; i <= 123; i++)
	{
	if (i != 123)
	{
	impre = i;
	}
	else
	{
	impre = 10;
	}
	_putchar(impre);
	}



}
