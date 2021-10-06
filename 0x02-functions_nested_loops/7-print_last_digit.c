int _putchar(char c);
int _abs(int n);
/**
* print_last_digit - function that evaluates last digit
* @n: parameter n integer
* Return: returns last digit of n
*/
int print_last_digit(int n)
{

	n = _abs(n);

	if (n > 9)
	{
	n = (n % 10);
	}
return (n);
}
