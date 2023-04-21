#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 * bravo-dev
 */
int sum_them_all(const unsigned int n, ...)
{
	// creating va_list to store the variable argument list
	va_list my_nums;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	// init valist for the number of arguments
	va_start(my_nums, n);

	// loop through/access all arguments stored in the valist
	for (count = 0; count < n; count++)
		sum += va_arg(my_nums, int);
	va_end(my_nums);
	return (sum);
}
