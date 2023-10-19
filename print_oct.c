#include "main.h"
/**
  *print_oct- print octal
  *@list: decimal argument
  *Return: length
 */
int print_oct(va_list list)
{
	unsigned long int n = va_arg(list, unsigned long int);

	int octa[100];

	int ind = 0, j, len;

	while (n / 8 != 0)
	{
		octa[ind] = n % 8;
		n = n / 8;
		ind++;
	}
	for (j = ind; j >= 0; j--)
	{
		_putchar(octa[j] + '0');
		len++;
	}
	return (len);
}
