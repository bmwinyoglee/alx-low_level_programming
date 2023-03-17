#include <stdio,h>
/**
 * main - block
 * Description: Using 'putchar' to print lower case of alphabet
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
