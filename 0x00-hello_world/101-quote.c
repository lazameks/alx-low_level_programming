#include <unistd.h>
/**
 * main - Entry point
 *
 * Prints without using printf or put
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
