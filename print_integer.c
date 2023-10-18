#include "main.h"

/**
 * print_number - prints an integer
 * @num: integer to be printed
 */
void print_number(va_list num) {
  int new_number = va_arg(num, int);

  int integer, digit, least_significant_digit = new_number % 10;

  int exponent = 1;

  int counter = 0;

  new_number = new_number / 10;
  integer = new_number;

  if (least_significant_digit < 0) {
    counter++;
    _putchar('-');
    new_number = -new_number;
    integer = -integer;
    least_significant_digit = -least_significant_digit;
  }

  if (integer > 0) {
    while (integer / 10 != 0) {
      integer = integer / 10;
      exponent = exponent * 10;
    }

    new_number = new_number;

    while (exponent > 0) {
      digit = integer / exponent;
      _putchar(digit + '0');
      integer = integer - (digit * exponent);
      exponent = exponent / 10;
      counter++;
    }
  }

  _putchar(least_significant_digit + '0');
  return (counter);
}

