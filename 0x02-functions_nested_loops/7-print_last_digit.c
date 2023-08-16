#include "main.h"
/**
 * print_last_digit: prints the lasr digit of a number
 *
 * Description: takes int argument
 *
 * Returns: value of last digit
 */
int print_last_digit(int c)
{
	int last_digit;
	if (c < 0)
		c = -c;
	last_digit = c % 10;
	if (last_digit < 0)
		last_digit = -last_digit;	
	_putchar(c);
	return (last_digit);
}
