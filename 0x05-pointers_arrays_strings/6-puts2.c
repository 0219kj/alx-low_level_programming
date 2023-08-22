#include "main.h"
/**
 * puts : print select characters from the string
 * @*str : string
 * return void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
