#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum number of coins for change
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 for success, 1 for errors
 */
int main(int argc, char **argv)
{
	int cents;
	int mncoin = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			mncoin++;
		}
	}

	printf("%d\n", mncoin);
	return (0);
}


