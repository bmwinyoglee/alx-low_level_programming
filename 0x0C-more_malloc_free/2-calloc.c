#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 * bravo-dev
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i = 0;

	unsigned int n = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}
