#include "main.h"
#include <stdarg.h>
/**
 *print_ch- char print
 *@chr: argument
 *Return: length
 */
int print_ch(va_list chr)
{
	char c;

	c = va_arg(chr, int);
	write(1, &c, 1);
	return (1);
}
