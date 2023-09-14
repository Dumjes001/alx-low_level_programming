#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform calculator function on a command line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: results of calc function execution
 */

int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd argument input */
	num1 = atoi(argv[1]); /* first number input */
	op = (argv[2]);
	num2 = atoi(argv[3]);

	/* if operator not in operator list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/*if user tries to divide or perform modulus b 0*/
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print results of operation */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
