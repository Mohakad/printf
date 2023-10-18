#include "main.h"
/**
 * print_biner- print binery
 * @biner: argument
 * Return: counter
 */
int print_biner(va_list biner)
{
	int len = 0, flag = 0, a = 1, ind = 0, bine;

	unsigned int n = va_arg(biner, unsigned int), poin;

	while (ind < 32)
	{
		poin = ((a << (32 - ind)) & n);
		if (poin >> (31 - ind))
			flag = 1;
		if (flag & 1)
		{
			len++;
			bine = poin >> (31 - ind);
			_putchar(bine + 48);
		}
		ind++;
	}
	if (len == 0)
	{
		len++;
		_putchar('0');
	}
	return (len);
}
