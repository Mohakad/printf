#include "main.h"
#include <unistd.h>
/**
 *print_ch- char print
 *@c: argument
 *Return: length
 */
int print_ch(char c)
{
	return (write(1, &c, 1));
}
