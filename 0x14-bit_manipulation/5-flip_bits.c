#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val)
	{
		count += (xor_val & 1);
		xor_val >>= 1;
	}

	return (count);
}
