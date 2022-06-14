#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First int to swap
 * @b: First int to swap
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
