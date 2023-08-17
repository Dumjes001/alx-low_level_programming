#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the chracter c to stdout
 * @c: The character to print
 *
 * Return: Successful returns 1, else 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
