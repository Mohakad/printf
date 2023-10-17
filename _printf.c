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
	unsigned int count = 0;

	char cha, *strin;

	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				cha = va_arg(args, int);
				print_ch(cha);
				count++;
			}
			else if (*format == 's')
			{
				strin = va_arg(args, char *);
				count += str_len(strin);
				print_str(strin);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar(*format);
				count++;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
