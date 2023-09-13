#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers separated by commas.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int prev = 1, curr = 2, next;

	printf("%ld, %ld", prev, curr);

	for (i = 3; i <= 50; i++)
	{
	next = prev + curr;
	prev = curr;
	curr = next;

	printf(", %ld", curr);
	}

	printf("\n");

	return (0);
}

