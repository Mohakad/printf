#include "main.h"
/**
 * print_digit - prints an integer
 * @list: the integer to be printed
 * Return: the number of characters printed
 */
int print_digit(va_list list)
{
	int newn = va_arg(list, int);

	int in, d, ls = newn % 10;

	int xpo = 1;

	int i = 0;

	newn = newn / 10;
	in = newn;
	if (ls < 0)
	{
		i++;
		_putchar('-');
		newn = -newn;
		in = -in;
		ls = -ls;
	}
	if (in > 0)
	{
		while (in / 10 != 0)
		{
			in = in / 10;
			xpo = xpo * 10;
		}
		while (xpo > 0)
		{
			d = in / xpo;
			_putchar(d + '0');
			in = in - (d * xpo);
			xpo = xpo / 10;
			i++;
		}
	}
	_putchar(ls + '0');
	return (i);
}
