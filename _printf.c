#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - Prints with format
 * @format: format for print
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	int count = 0;

	int ccount = 0;

	char *scount;

	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					ccount = va_arg(args, int);
					print_ch(ccount);
					break;
				case 's':
					scount = print_str(va_arg(args, char *));
					count += scount - 1;
					break;
				case '%':
					count += print_ch('%');
					break;
				default:
					count += print_ch('%');
					count += print_ch(*format);
					break;
			}
		}
		else
			count += print_ch(*format);
		format++;
	}
	va_end(args);
	return (count);
}
