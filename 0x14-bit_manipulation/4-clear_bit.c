#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to the number containing the bit to be cleared.
 * @index: The index of the bit to be cleared.
 *
 * Return: 1 if the operation succeeded, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
