#include "main.h"

/**
 * print_integer - prints an integer
 * @arg: integer to be printed
 * @return: the number of characters printed
 */
int print_integer(va_list arg)
{
	int integer = va_arg(arg, int);

	int quotient, digit, least_significant_digit = integer % 10;

	int exponent = 1;

	int counter = 0;

	integer = integer / 10;
	quotient = integer;

	if (least_significant_digit < 0)
	{
		_putchar('-');
		integer = -integer;
		quotient = -quotient;
		least_significant_digit = -least_significant_digit;
		counter++;
	}

	if (integer > 0)
	{
		while (quotient / 10 != 0)
		{
			exponent = exponent * 10;
			quotient = quotient / 10;
		}

		integer = integer;

		while (exponent > 0)
		{
			digit = integer / exponent;
			_putchar(digit + '0');
			integer = integer - (digit * exponent);
			exponent = exponent / 10;
			counter++;
		}
	}

	_putchar(least_significant_digit + '0');
	return (counter);
}

