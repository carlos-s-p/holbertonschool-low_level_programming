int _putchar(char c);
/**
* _isalpha - function for veryfing if a number is alphanumeric
* @c: parameter integer
* Return: Returns 1 if is alphanumeric else 0
*/

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)) || ((c >= 48) && (c <= 57)))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
