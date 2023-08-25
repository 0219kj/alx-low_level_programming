#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - converts text to uppercase
 * @text: pointer text to change to uppsercase
 * Return: char stream pointer to uppercase
 */
char *cap_string(char *text)
{
	int i;

	for (i = 0; i < strlen(text); i++)
	{
		if (text[i] == ',' || text[i] == ';'
				|| text[i] == '.' || text[i] == '!'
				|| text[i] == '?' || text[i] == '"'
				|| text[i] == '(' || text[i] == ')'
				|| text[i] == '{' || text[i] == '}')
			text[i + 1] = toupper(text[i + 1]);

	return (text);
}
