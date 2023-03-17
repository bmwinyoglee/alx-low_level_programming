#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - the main block
 * Description: Get a random number and print the number
 * and if the number is positive or negative or Zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** your code goes here */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
