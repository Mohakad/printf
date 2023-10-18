#include "main.h"
/**
 * print_biner- print binery
 * @bine: argument
 * Return: counter
 */
int print_biner(unsigned int bine)
{
	int len = 0;

	if (bine > 1) 
	{
		print_biner(bine >> 1);
		len++;
	}
	_putchar((bine & 1) + '0');
	return (len);
}
