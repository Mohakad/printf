#include "main.h"
/**
 * print_digit - prints an integer
 * @integer: the integer to be printed
 * Return: the number of characters printed
 */
int print_digit(va_list list)
{
	int integer = va_arg(list, int);

	int least_significant_digit = integer % 10;

	int exponent = 1, digit;

	int counter = 0;

	if (least_significant_digit < 0)
	{
		_putchar('-');
		integer = -integer;
		least_significant_digit = -least_significant_digit;
		counter++;
	}
	if (integer > 0)
	{
		while (integer / 10 != 0)
		{
			exponent = exponent * 10;
			integer = integer / 10;
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
