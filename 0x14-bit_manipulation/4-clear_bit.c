#include "main.h"

/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: A pointer to the number containing the bit.
 * @index: The index to clear the value at - indices start at 0.
 *
 * Return: If the index is out of range - returns -1.
 *         Otherwise - returns 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

