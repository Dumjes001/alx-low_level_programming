#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - Frees a 2D grid.
 * @grid: The 2D grid to free.
 * @height: The height of the grid.
 */

void ch_free_grid(char **grid, size_t height)
{
	size_t i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to the new allocated memory for the array of words.
 */

char **strtow(char *str)
{
	char **aout;
	size_t c, height = 0, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}

	aout = malloc(sizeof(char *) * (height + 1));
	if (aout == NULL)
	{
		return (NULL);
	}

	for (i = 0, a1 = 0; i < height; i++)
	{
		while (str[a1] == ' ')
			a1++;

		for (c = a1; str[c] != ' ' && str[c] != '\0'; c++)
			;

		aout[i] = malloc((c - a1 + 2) * sizeof(char));
		if (aout[i] == NULL)
		{
			ch_free_grid(aout, i);
			return (NULL);
		}

		for (j = 0; a1 <= c; a1++, j++)
			aout[i][j] = str[a1];

		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}

