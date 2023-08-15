#include <unistd.h>
#include "main.h"

/**
 * _putchar - this write the character c to output
 * @c: This prints the character
 *
 * Return: on successful execution it returns 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
