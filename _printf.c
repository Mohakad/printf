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

	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_ch(va_arg(args, int));
					break;
				case 's':
					count += print_str(va_arg(args, char *));
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
