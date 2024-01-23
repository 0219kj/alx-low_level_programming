#include<stdio.h>
/**
 * Testing a loop
 */
void main()
{
	char name[] = "john kamau";
	int i;
	for(i = 0; name[i] != '\0'; i++)
		;

	printf("i = %d\n", i);
}
