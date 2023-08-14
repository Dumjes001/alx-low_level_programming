#include <stdio.h>

/**
 * main - main function
 *
 * Return: executes at 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 0)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
