int _putchar(char c);
/**
* print_sign - function for evaluating the sign of a number
* @n: parameter integer
* Return: Returns sign of the number
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
