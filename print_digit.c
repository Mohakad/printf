#include "main.h"
/**
 * print_digit - prints an integer
 * @n:an integer to be printed
 * Return: the number of characters printed
 */
int print_digit(va_list n)
{
	int num = va_arg(n, int), in, digit, num_digits = num % 10,
		i = 0, exponent = 1;

	num = num / 10;
	in = num;
	if (num_digits < 0)
	{
		i++;
		_putchar('-');
		num = -num;
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
		in = num;
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
