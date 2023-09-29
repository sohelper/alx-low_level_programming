#include "main.h"

/**
 * print_binary - this function show the binary representation.
 * @n: the number you are wishing to show.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
