#include <stdio.h>

/**
 * main - the main function
 *
 * Return: executes at 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
