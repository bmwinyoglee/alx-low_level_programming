#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j;

	i = n ^ m;
	j = 0;

	while (i)
	{
		j++;
		i &= (i - 1);
	}

	return (j);
}
