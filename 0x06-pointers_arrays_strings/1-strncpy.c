#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenate teo stringd tongether
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of bytes to copy
 * Return: concatenated string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int i;

	len_dest = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';

	return (dest);
}
