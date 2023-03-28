#include "main.h"
#include <stdio.h>

/**
 * swap_int - take char to be swapped
 *
 * @a: char to be swapped for b
 * @b: char to be swapped for a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
