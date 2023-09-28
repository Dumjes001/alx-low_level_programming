#include "main.h"

/**
 * binary_to_uint - a program that converts binary numbers
 * to integers/decimals numbers
 *
 * @b: a character pointer to a string containing the
 * binary numbers
 *
 * Return: the converted decimal (output)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	unsigned int len = 0;

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (unsigned int i = 0; i < len; i++)
	{
		sum = sum * 2 + (b[i] - '0');
	}

	return (sum);
}

