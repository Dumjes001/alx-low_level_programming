#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number
 *
 * @n: this takes number input.
 *
 * Return: this returns the lastDigit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
