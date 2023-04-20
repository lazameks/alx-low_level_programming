#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a fubction passed for each element of the array
 * @array: the array for array_iterator to be executed upon
 * @size: this is the size of the array
 * @action: this is a call back function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
