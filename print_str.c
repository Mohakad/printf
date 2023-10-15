#include "main.h"
/**
*print_str- prints string
*@str: argument
*Return: length
*/
int print_str(char *str)
{
	int len = 0;

	int i;

	len = str_len(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (len);
}
