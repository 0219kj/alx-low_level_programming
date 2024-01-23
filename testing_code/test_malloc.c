#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* name;

	name = (char* )malloc(strlen("Kamau"));

	for(int i = 0; i < 5; i++)
	{
		name[i] = 'a';
	}
	for (int j = 0; j < 5; j++)
	{
		printf("%c", *(name + 1));
	}
	printf("\n");

	return (0);
}
