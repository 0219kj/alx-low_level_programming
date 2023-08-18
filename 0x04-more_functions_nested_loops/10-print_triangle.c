#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;
	if (size == 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = i; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
