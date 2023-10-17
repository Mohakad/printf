#ifndef MAIN_H_I
#define MAIN_H_I

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int print_ch(va_list chr);
int _putchar(char c);
int print_biner(va_list inp);
int _printf(const char *format, ...);
int print_str(va_list str);
int str_len(char *str);
#endif
