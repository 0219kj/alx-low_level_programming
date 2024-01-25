/**
 * int_index: fxn to search for a specific integer
 * @array: array input where we conduct our search
 * @size: size of the array
 * @cmp: comparing callback fxn
 *
 * return: integer index 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
