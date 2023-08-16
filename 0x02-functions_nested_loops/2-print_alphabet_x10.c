#include "main.h"

void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for ( i = 0; i < 10; i++)
	{
		int  j;
		for ( j = 0; j < 26; j++ )
		{
			_putchar(alphabet[j]);
		}
		_putchar('\n');
	}
}
