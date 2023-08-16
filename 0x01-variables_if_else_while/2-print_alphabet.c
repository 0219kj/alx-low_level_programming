#include<stdio.h>

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopuvwxyz";
	int i;
	for (i = 0; i<26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
