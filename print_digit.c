#include "main.h"
/**
 * print_digit - prints an integer
 * @n: integer to be printed
 * Return: the number of characters printed
 */
int print_digit(va_list n)
{
	int number = va_arg(n, int), in, digit, num_digits = number % 10,
		i = 0, exponent = 1;

	number = number / 10;
	in = number;
	if (num_digits < 0)
	{
		i++;
		_putchar('-');
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
		in = number;
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
