#include "main.h"

/**
 * swap_int - swaps the values of two integers using a third variable
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
