#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int prev = 1, curr = 2, next;
	int count;

	printf("%lu, %lu, ", prev, curr);

	for (count = 3; count <= 98; count++)
	{
	next = prev + curr;
	prev = curr;
	curr = next;

	if (count < 98)
	printf("%lu, ", next);
	else
	printf("%lu\n", next);
	}

	return (0);
}
