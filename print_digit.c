#include "main.h"

/**
 * print_digit - prints an integer
 * @arg: integer to be printed
 * @return: the number of characters printed
 */
int print_digit(va_list arg)
{
	int integer = va_arg(arg, int);

	int counter = 0;

	if (integer < 0)
	{
		_putchar('-');

		integer = -integer;

		counter++;
	}

	int exponent = 1;
	while (integer / exponent >= 10)
	{
		exponent *= 10;
	}

	while (exponent > 0)
	{
		int digit = integer / exponent;
		_putchar(digit + '0');
		integer -= digit * exponent;
		exponent /= 10;
		counter++;
	}

	_putchar(integer + '0');

	return (counter);
}


