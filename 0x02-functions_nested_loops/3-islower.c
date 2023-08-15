#include "main.h"

/**
 * _islower - this function checks if the chareacter is lowercase
 *
 * @c: this checks the input of the function
 *
 * Return: successful execution it returns 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
