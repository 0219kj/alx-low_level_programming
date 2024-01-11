#include "main.h"
/**
 * _pus_recursion:function to print a string using a  recursion technique
 * @s-character array
 * Returns-void
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
