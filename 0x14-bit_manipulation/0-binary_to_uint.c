#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointer to a string of binary numbers
 *
 * Return:The converted number, or 0
 * bravo-dev
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, expo;
	int w;

	if (b == NULL)
		return (0);

	for (w = 0; b[w]; w++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
	}

	for (expo = 1, result = 0, w--; w >= 0; w--, expo *= 2)
	{
		if (b[w] == '1')
			result += expo;
	}
	return (result);
}
