#include "main.h"
/**
 * swap_int : swap the value of two integers with pointers
 * @*a - integer 1
 * @*b - integer 2
 * return void
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a =  *b;
	*b = c;
}
