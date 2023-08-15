#include <unistd.h>
#include "main.h"

/**
 * _putchar - the function writes the character c to output
 *
 * @c: This is to print the character input
 *
 * Return: on successful execution it returns 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
