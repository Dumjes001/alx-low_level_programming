#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always to 0
 */

void more_number(void)
{
	int num, row, count;

	for (row = 2; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
