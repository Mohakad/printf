#include "main.h"
/**
 *print_ch- char print
 *@chr: argument
 *Return: length
 */
int print_ch(va_list chr)
{
	char c;

	c = va_arg(chr, int);
	_putchar(c);
	return (1);
}
