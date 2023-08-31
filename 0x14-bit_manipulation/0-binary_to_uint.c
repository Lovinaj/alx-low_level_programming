#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
	return (0); /* Error: the input string is NULL */

	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;

		if (b[i] == '1')
			result += 1;
		else if (b[i] != '0')
			return (0); /* Error: the string contains a non-binary digit */
	}

	return (result);
}


