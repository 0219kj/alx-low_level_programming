#include <stdio.h>
#include "main.h"

void print_most_numbers()
{
	int i;
	i = 0;
	while (i < 10)
	{
		if (i == 2)
			continue;
		else if (i == 4)
			continue;
		else
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
