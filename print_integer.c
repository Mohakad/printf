#include "main.h"

/**
 * print_integer - prints an integer
 * @arg: integer to be printed
 * @return: the number of characters printed
 */
int print_integer(va_list arg)
{
	int number = va_arg(arg, int);
	int counter = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		counter++;
	}

	int divisor = 1;
	while (number / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = number / divisor;
		number -= digit * divisor;
		divisor /= 10;
		_putchar(digit + '0');
		counter++;
	}

	return (counter);
}

