#include "main.h"
/**
 *str_len- string length calculation
 *@str: argument
 *Return: length
 */
int str_len(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
