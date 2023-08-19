#include "main.h"

/**
 * print_square - prints square using the '#' character
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}

}

