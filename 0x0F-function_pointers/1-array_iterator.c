#include <stdio.h>
/**
 * array_iterator - funtion that accepts a function pointer
 * @array: array pointer to be worked upon by the funtion pointer
 * @size: the size of the array
 * @action: the funtion pointer name
 *
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; ++i)
		action(array[i]);
}
