#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointe destination input
 * @src: point to source input
 *
 * Return: pointe to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of the last array*/
	while (dest[c])
		c++;

	/* itereate through each src array value without the null byte*/
	for (c2 = 0; src[c2]; c++)
		/*append src[2] to dest[c] whle overwiting the null byte*/
		dest[c++] = src[c2];

	return (dest);
}
