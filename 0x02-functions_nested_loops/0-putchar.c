#include "main.h"

/**
 * main - is the main function in the program
 *
 * Return: 0
 */

int main(void)
{
	char put_array[] = "_putchar";
	int i = 0;

	while (put_array[i] != '\0')
	{
		_putchar(put_array[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
