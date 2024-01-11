#include "main.h"
/**
 * _pus_recursion:function to print a string using a  recursion technique
 * @s-character array
 * Returns-void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
	else
		_putchar('\n');
}
