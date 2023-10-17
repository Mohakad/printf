#include "main.h"
/**
*print_str- prints string
*@str: argument
*Return: length
*/
int print_str(va_list str)
{
	int len = 0, i;

	char *st;

	st = va_arg(str, char *);
	len = str_len(st);
	for (i = 0; i < len; i++)
		_putchar(st[i]);
	return (len);
}
