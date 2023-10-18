#ifndef MAIN_H_I
#define MAIN_H_I

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

typedef struct format
{
	char *st;
	int (*fun)();
} find;
int print_integer(va_list number);
int print_perc(void);
int print_ch(va_list list);
int _putchar(char c);
int print_biner(va_list biner);
int _printf(const char *format, ...);
int print_str(va_list str);
int str_len(char *str);
int print_digit(va_list list);
#endif
