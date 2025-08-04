#include <stdio.h>
/**
 * print_name - Function to print name in any format
 * @name: name to be printed
 * @f: funtion pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
