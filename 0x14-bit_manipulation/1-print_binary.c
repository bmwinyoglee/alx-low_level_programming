#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: number to print as binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int j;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, j = 0; (i >>= 1) > 0; j++);

	while (j >= 0)
	{

	    if ((n >> j) & 1)
	        printf("1");
	    else
	        printf("0");
	    j--;
	}
}
