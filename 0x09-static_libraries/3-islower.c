#include "main.h"
#include <ctype.h>
/**
 * _islower
 * Description: return 1 if a char is > 0 else resurns 0
 */
int _islower(int c)
{
	if ( islower(c))
		return (1);
	else
		return (0);
}
