#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the sum of even Fibonacci terms
 * below 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int prev = 1, curr = 2, next, sum = 0;

	while (curr <= 4000000)
	{
	if (curr % 2 == 0)
	sum += curr;

	next = prev + curr;
	prev = curr;
	curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
