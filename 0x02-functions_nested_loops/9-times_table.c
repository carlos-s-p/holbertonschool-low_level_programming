int _putchar(char c);
/**
* times_table - function that evaluates 9 times table
* 
* 
*/
void times_table(void)

{
	int i;

	int j;

	int d1;

	int d2;

	int producto;

	for (i = 0; i <= 9; i++)
	{
	for(j = 0; j <= 9; j++)
	{
		producto = i*j;

		d1 = producto/10;

		d2 = producto%10;

		if (producto > 9)
		{
		_putchar('0' + d1);
		_putchar('0' + d2);
		}
		else
		{
		_putchar('0'+producto);
		}

		if(j != 9)
		{

		_putchar(44);
		_putchar(32);

		}


	}
		_putchar(10);
	}
}
