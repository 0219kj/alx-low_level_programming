#include "main.h"
#include <stdlib.h>
/**
 * _abs: computes the absolute value
 */
int _abs(int c)
{
	if ( c == 0)
		return (c);
	else if (c < 0)
		return (-c);
	else
		return (c);
}
