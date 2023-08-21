#include "main.h"

/**
 * rev_string - prints the reversed string output to stdout
 *
 * @s: this prints the integer
 * @b - this prints the integer
 * @i - this print the integer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int b, i;
	char temp;


	/*find string length without null char*/
	for (b = 0; s[b] != '\0'; ++b)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < b / 2; i++)
	{
		temp = s[i];
		s[i] = s[b - 1 - i];
		s[b - 1 - i] = temp;
	}
}
