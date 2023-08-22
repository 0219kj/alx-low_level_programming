#include "main.h"
#include <string.h>
/**
 * _strlen: returning the total number of characters in a string
 * @*s: a pointer to our string
 * return: string length
 */
int _strlen(char *s)
{
	int len;
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
