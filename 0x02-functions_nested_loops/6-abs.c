#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer for which to compute the absolute value.
 *
 * Return: The absolute value of n.
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;
	
	abs_val = c * -1;
	return (abs_val);
	}
        return (c);
}

