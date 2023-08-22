#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int counter;

	counter = 1;
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len >= counter)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
