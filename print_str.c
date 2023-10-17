#include "main.h"
/**
*print_str- prints string
*@str: argument
*Return: length
*/
int print_str(va_list str)
{
	char *s = va_arg(str, char *);

	int index = 0;

	if (s == NULL)
		s = "(null)";
	while (s[index])
	{
		_putchar(s[index]);
		index++;
	}
	return (index);
}
