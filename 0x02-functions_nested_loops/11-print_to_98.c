#include "main.h"
#include<stdio.h>
/**
 * print_to_98: prints all natural numbers from 0 -98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;
		for ( i = n; i <= 98; i++ )
			printf("%d, ",i);
		printf("\n");
	}
	else if (n >= 98)
	{
		int i;
		for ( i = 98; i >= n; i--)
			printf("%d, ",i);
		printf("\n");
	}

}
