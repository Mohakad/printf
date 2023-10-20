#include "main.h"
void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - Print output according to a format.
 * @format: The format.
 * Return: characters printed length.
 */
int _printf(const char *format, ...)
{
	char buffer[1024];

	int index = 0, prin_len = 0, j, buff_ind = 0;

	find fn[] = {
		{"%c", print_ch}, {"%s", print_str}, {"%%", print_perc},
		{"%b", print_biner}
	};
	void print_integer(va_list arg);
	void print_integer(va_list arg);
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
wh:
	while (format[index] && format)
	{
		j = 3;
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
	print_buffer(buffer, &buff_ind);
	va_end(args);
	return (prin_len);
}
/**
* print_buffer - Prints the contents of the buffer
* @buffer: chars
* @buff_ind: current length
*/
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
