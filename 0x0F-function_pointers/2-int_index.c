#include "function_pointers.h"
/**
 * int_index - helps to return the index of found integer in the array
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: the funtion pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
