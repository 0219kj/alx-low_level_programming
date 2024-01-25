#include<stddef.h>
/**
 * array_iterator: iterates through an array
 * @array: array for iteration
 * @size: size of array
 * @action: function call back
 *
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
