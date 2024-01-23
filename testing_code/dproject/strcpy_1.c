#include<stdio.h>
#include<string.h>
#include<stblib.h>

/**
 * str_cpy: function that copies a given string at another memory location
 * @str: the string to be replicated
 * return: the repricated string
 */
char str_cpy(char* str)
{
	char* cpy_str;

	cpy_str = (char* )malloc(strlen(str) + strlen("copied text"));

	if (cpy_str ==NULL)
	{
		printf("Memory could not be allocated");
		exit(1);
	}

	for (int i = 0; i < strlen(str); i++)
	{
		cpy_str[i] = str[i];
	}

	return *cpy_str;
}
