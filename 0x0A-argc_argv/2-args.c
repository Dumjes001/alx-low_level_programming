#include <stdio.h>

/**
 * main - print all arguments it receive
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arg
 *
 * Return: returns 0 on Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
