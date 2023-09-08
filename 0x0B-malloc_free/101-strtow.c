#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_whitespace - Check if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if it's a whitespace character, 0 otherwise.
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words). The last element of
 *         the returned array is NULL. Returns NULL if str == NULL or str == "".
 *         If the function fails, it returns NULL.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	int i, j, word_count = 0;
	int in_word = 0;
	char **words = NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_whitespace(str[i]))
		{
			if (!in_word)
			{
				in_word = 1;
				word_count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	in_word = 0;
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_whitespace(str[i]))
		{
			if (!in_word)
			{
				in_word = 1;
				int word_length = 1;

				while (str[i + word_length] != '\0' && !is_whitespace(str[i + word_length]))
				{
					word_length++;
				}
				words[j] = (char *)malloc(word_length + 1);
				if (words[j] == NULL)
				{
					for (int k = 0; k < j; k++)
					{
						free(words[k]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[j], &str[i], word_length);
				words[j][word_length] = '\0';
				j++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	words[word_count] = NULL;
	return (words);
}
int main(void)
{
	char **words = strtow("  Hello  World  ");

	if (words != NULL)
	{
		for (int i = 0; words[i] != NULL; i++)
		{
			printf("%s\n", words[i]);
			free(words[i]);
		}
		free(words);
	}
	return (0);
}
