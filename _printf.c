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

	char cha, *strin;

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
					cha = va_arg(args, int);
					count += write(1, &cha, 1);
					break;
				case 's':
					strin = va_arg(args, char *);
					count += write(1, strin, str_len(strin));
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				default:
					count += write(1, "%", 1);
					count += write(1, &(*format), 1);
					break;
			}
		}
		else
			count += write(1, &(*format), 1);
		format++;
	}
	va_end(args);
	return (count);
}
