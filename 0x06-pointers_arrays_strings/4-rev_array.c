#include "main.h"

/**
 * reverse_array - reverses the array
 *
 * @a: the arrray
 * @n: int number of arrays
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
