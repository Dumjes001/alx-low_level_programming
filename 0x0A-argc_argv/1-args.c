#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arg
 *
 * Return: 0 is returned when successful.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
