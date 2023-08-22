#include "main.h"
/**
 * puts_half: print the second half of a string
 * @*str: a string pointer
 * return: void
 */
void puts_half(char *str)
{
	int len;
	int counter;
	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	
	counter = len /2;
	if (len % 2 == 1)
		counter = (len - 1)/2;

	while (counter <= len)
	{
		_putchar(str[counter]);
		counter++;
		str++;
	}
	_putchar('\n');
}
