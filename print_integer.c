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

	int ind = 1;

	newn = newn / 10;
	in = newn;
	if (ls < 0)
	{
		ind++;
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
			xpo *= 10;
		}
		in = newn;
		while (xpo > 0)
		{
			d = in / xpo;
			_putchar(d + '0');
			in = in - (d * xpo);
			xpo = xpo / 10;
			ind++;
		}
	}
		_putchar(ls + '0');
		return (ind);
}
