#include "main.h"

/**
 * print-sign - print + if n is greater than zero.
 * 		print 0 if n is zero and - if n is lesse
 * 		than zero.
 * @c: this takes and integer typr input for function.
 *
 * Return: this returns 1 if +, and 0 if 0 and -1 if 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else 
	{
		_putchar(45);
		return (-1);
	}
}
