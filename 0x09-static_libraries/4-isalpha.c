#include "main.h"
#include <ctype.h>
/**
 * isalpha
 *
 * Description: checks for alphabetic character
 *
 * Return: 1 if alphabetic and 0 otherwise
 */
int _isalpha(int c)
{
	if ( isalpha(c) )
		return(1);
	else
		return (0);
}
