#include "main.h"
/**
 * print_biner- print binery
 * @inp: argument
 * Return: counter
 */
int print_biner(va_list inp)
{
	unsigned int n, kb;

	int flag = 0, numbc = 0, i;

	n = va_arg(inp, unsigned int);
	for (i = 31; i >= 0; i--)
	{
		kb = n >> i;
		if (kb & 1)
			flag = 1;
		if (flag)
		{
			_putchar('1');
			numbc++;
		}
	}
	if (numbc == 0)
	{
		numbc++;
		_putchar('0');
	}
	return (numbc);
}
