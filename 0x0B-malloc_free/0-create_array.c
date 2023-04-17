#include "main.h"
#include <stdlib.h>

/**
 * create_array -  create an array of chars and initialize with a char
 * @size: is the size of the array
 * @c: is a specific char
 * Return: char pointer to malloc created memorry address or null if arror
 * bravo-dev
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}

