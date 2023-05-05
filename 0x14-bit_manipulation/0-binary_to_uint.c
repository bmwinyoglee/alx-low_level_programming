/**0-binary_to_uint.c */

#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointer to a string of binary numbers
 *
 * Return:The converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int m;

	m = 0;
	if (!b)
		return (0);
	for (w = 0; b[w] != '\0'; w++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
	}
	for (w = 0; b[w] != '\0'; w++)
	{
		m <<= 1;
		if (b[w] == '1')
			m += 1;
	}
	return (m);
}
