#include "function_pointers.h"

/**
 * print_name - printing a name from parameters
 *
 * @name: name to print
 * @f: pointer to the function
 *bravo-dev
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
