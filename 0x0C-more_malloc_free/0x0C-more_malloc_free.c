#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memeory using malloc
 *
 * @b: input int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
