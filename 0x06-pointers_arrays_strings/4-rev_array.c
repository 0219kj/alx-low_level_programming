#include "main.h"
/**
 * reverse_array - reverse contents of an array
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
		_putchar(a[i] % 10 + '0');
}
