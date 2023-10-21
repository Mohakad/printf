#include "main.h"
/**
 * print_integer - prints an integer
 * @n: integer to be printed
 * Returns : the number of digits in the integer
 */
int print_integer(va_list n)
{
	int number = va_arg(n, int);

	int in, digit, num_digits = number % 10;

	int exponent = 1;

	int i = 0;

	number = number / 10;

	in = number;

	if (num_digits < 0)
	{
		i++;
		_putchar(' - ');
		number = -number;
		in = -in;
		num_digits = -num_digits;
	}
	if (in > 0)
	{
		while (in / 10 != 0)
		{
			in = in / 10;
			exponent = exponent * 10;
		}
		n = number;
		while (exponent > 0)
		{
			digit = in * exponent;
			_putchar(digit + '0');
			in = in - (digit * exponent);
			exponent = exponent / 10;
			i++;
		}
	}

	_putchar(num_digits + '0');
	return (i);
}

