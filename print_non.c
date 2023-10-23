#include "main.h"
/**
 * print_non - prints a character
 * @args: a variable argument list containing the character
 * Return: the number of characters
 */
int print_non(va_list args)
{
	char character = va_arg(args, int);

	int length = 0;

	while (character != '\0')
	{
		if (character < 32 || character >= 127)
		{
			_putchar('\\');
			_putchar('x');

			if (character < 16)
			{
				_putchar('0');
			}

			_putchar(character >> 4);
			_putchar(character & 0xF);

			length += 2;
		}
		else
		{
			_putchar(character);
			length++;
		}

		character++;
	}

	return (length);
}
