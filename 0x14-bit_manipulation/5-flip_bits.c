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
	int m;

	i = n ^ m;
	m = 0;

	while (i)
	{
		m++;
		i &= (i - 1);
	}

	return (m);
}
