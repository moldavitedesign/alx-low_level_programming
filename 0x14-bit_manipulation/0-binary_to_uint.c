#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - This function converts a binary number to an unsigned integer.
 * @b: A pointer to a string of 0's and 1's representing a binary number.
 *
 * Return: The decimal equivalent of the binary number. If @b is NULL or contains
 *         characters other than 0's and 1's, the function returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int power = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len > 0)
	{
		len--;
		if (b[len] == '1')
			decimal += power;
		power *= 2;
	}

	return (decimal);
}

