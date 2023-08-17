#include<ctype.h>
/**
 * _isdigit: checks if digit or not
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return 1;
	else
		return 0;
}
