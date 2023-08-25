#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - converts text to uppercase
 * @text: pointer text to change to uppsercase
 * Return: char stream pointer to uppercase
 */
char *string_toupper(char *text)
{
	int i;

	for (i = 0; i < strlen(text); i++)
	{
		if (islower(text[i]))
			text[i] = toupper(text[i]);
	return (text);
}
