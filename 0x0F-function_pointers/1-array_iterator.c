#include "function_ponters.h"

/**
 * array_iterator - execute the function in param to array
 * 
 * @array: array we work on
 * @size: size of array
 * @action: the action we do
 *
 * Return hwee (nothing)
 * bravo-dev
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
