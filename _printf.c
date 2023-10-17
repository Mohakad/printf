#include "main.h"
/**
 * _printf - Print output according to a format.
 * @format: The format.
 * Return: characters printed length.
 */
int _printf(const char *format, ...)
{
	int index = 0, prin_len = 0, j;

	find fn[] = {
		{"%c", print_ch}, {"%s", print_str}, {"%%", print_perc}, {"%b", print_biner}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
wh:
	while (format[index] && format)
	{
		j = 2;
		while (j >= 0)
		{
			if (fn[j].st[0] == format[index] && fn[j].st[1] == format[index + 1])
			{
				prin_len += fn[j].fun(args);
				index += 2;
				goto wh;
			}
			j--;
		}
		_putchar(format[index]);
		index++;
		prin_len++;
	}
	va_end(args);
	return (prin_len);
}
