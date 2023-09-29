#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to convert one number to another.
 * @n: The source number.
 * @m: The target number to convert n to.
 *
 * Return: The number of bits that need to be flipped to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

