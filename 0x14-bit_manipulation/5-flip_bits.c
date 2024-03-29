#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to convert n to m
 * @n: the first number
 * @m: the second number to convert to
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}

