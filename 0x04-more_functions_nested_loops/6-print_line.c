#include "main.h"

/**
 * print_line - print a straight line on the terminal
 *
 * @n: is the number of times the _ character should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
