#include "main.h"
/**
 * print_integer - prints an integer
 * @number: integer to be printed
 * Return: the number of
 */
int print_integer(va_list number)
{
	int newn = va_arg(number, int);

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
			d = in * xpo;
			_putchar(d + '0');
			in = in - (d * xpo);
			xpo = xpo / 10;
			i++;
		}
	}
		_putchar(ls + '0');
		return (i);
}
