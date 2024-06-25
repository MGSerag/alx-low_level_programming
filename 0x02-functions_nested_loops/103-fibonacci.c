#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next_fib;
	unsigned long sum = 2;  /* Starting with the first even term */

	while (1)
	{
		next_fib = fib1 + fib2;
		if (next_fib > 4000000)
			break;

		if (next_fib % 2 == 0)
			sum += next_fib;

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("%lu\n", sum);

	return (0);
}
