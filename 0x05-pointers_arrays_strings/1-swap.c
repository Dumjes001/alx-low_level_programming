#include "main.h"

/**
 * swap_int - this swaps the vaue of the integers using
 * two parameters
 *
 * @a: integer for parameter 1
 * @b: integer for parameter 2
 *
 * @Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
