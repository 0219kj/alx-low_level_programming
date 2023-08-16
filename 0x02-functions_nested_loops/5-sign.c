#include "main.h"
/**
 * print_sign: prints the signed of a number
 *
 * Return: 1 if n is positier, 0 if 0, and -1 for negatie
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
