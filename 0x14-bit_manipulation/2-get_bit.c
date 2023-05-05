#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 * bravo-dev
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
		return (-1);

	b = n >> index;

	return (b & 1);
}
