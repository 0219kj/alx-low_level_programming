#include "main.h"

void print_square(int size)
{
	int i;
	int j;
	if (size == 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size + 1; i++)
		{
			for (j = 0; j < size + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
