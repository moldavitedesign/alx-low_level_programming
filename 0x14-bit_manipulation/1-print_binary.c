#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x8000000000000000;
	int leading_zeroes = 1;

	while (mask > 0) {
		if (n & mask)
			leading_zeroes = 0;

		if (!leading_zeroes)
			printf("%lu", (n & mask) ? 1 : 0);

		mask >>= 1;
	}

	if (leading_zeroes)
		printf("0");
}

