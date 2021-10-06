int _putchar(char c);
/**
* jack_bauer - function that evaluates absolute value
*
*
*/
void jack_bauer(void)
{

	int i;

	int j;

	int x;

	int y;

	for (i = 0; i <= 2; i++)
	{

	for (j = 0; j <= 9; j++)
	{
		for (x = 0; x <= 5; x++)
		{


		for (y = 0; y <= 9; y++)

		{

		if ((i != 2) || (j < 4))
		{
		_putchar('0' + i);
		_putchar('0' + j);

		_putchar(58);
		_putchar('0' + x);
		_putchar('0' + y);
		_putchar(10);

		}

		}

		}
	}

	}
}
