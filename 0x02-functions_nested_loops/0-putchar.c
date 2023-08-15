#include "main.h"

/**
 * main - the main function
 *
 * Return: this executes to 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');


	return (0);
}
