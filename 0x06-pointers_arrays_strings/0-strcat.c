#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: destination for the final string
 * @src: where to copy thestring from
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;
	int i;

	len_dest = strlen(dest);
	len_src = strlen(src);

	for (i = 0; i < len_src && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}
