#include <stdio.h>
/**
 * main - print its name, followed by a new line
 *
 * @argc: number of commands line arguments.
 * @argv: array that contains the command line arguments
 *
 * Return: On Success returns 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
