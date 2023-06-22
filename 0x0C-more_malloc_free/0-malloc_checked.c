#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate mem using malloc
 * @b: mem size to use
 *
 * Return: ptr always
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
