#include "main.h"

/**
 * string_nconcat - function for concat
 *
 * @s1: param1
 * @s2: param2
 * @n: param3
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lenA = 0, i = 0, j = 0, size = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + lenA) != '\0')
	{
		lenA++;
	}
	size = lenA + n;

	p = (char *) malloc((sizeof(char) * size) + 1);

	if (p == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}

	while (i < size && j < n)
	{
		*(p + i) = *(s2 + j);
		j++;
		i++;
	}

	*(p + i) = '\0';
	return (p);
}

