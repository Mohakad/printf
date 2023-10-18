#include "main.h"
/**
 * print_biner- print binery
 * @biner: argument
 * Return: counter
 */
int print_biner(va_list biner)
{
	unsigned int ad[32], num, pow, ind, s, len;

	char outp;

	num = va_arg(biner, unsigned int);
	pow = 2147483648;
	ad[0] = num / pow;
	for (ind = 1; ind < 32; ind++)
	{
		pow /= 2;
		ad[ind] = (num / pow) % 2;
	}
	for (ind = 0, len = 0, s = 0; ind < 32; ind++)
	{
		s += ad[ind];
		if (s || ind == 31)
		{
			outp = ad[ind] + '0';
			_putchar(outp);
			len++;
		}
	}
	return (len);
}
