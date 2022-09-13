#include "main.h"

/**
 * strtow - this function divides a string into separate words.
 * @str: string literal.
 * Return: an array of strings representing words extracted.
 */

char **strtow(char *str)
{
	char **words;
	int i = 0, sizes[100], letters = 0, wrd = 0, j = 0;

	if (str == "" || str == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			letters++;
			if (str[i + 1] == ' ' || !str[i + 1])
			{
				sizes[wrd] = letters;
				wrd++;
				letters = 0;
			}
		}
		i++;
	}
	words = malloc((wrd + 1) * sizeof(char *));
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			words[j] = malloc((sizeof(char) * sizes[j]) + 1);
			while (letters < sizes[j])
			{
				words[j][letters] = str[i];
				letters++, i++;
			}
			letters = 0, j++;
		}
		else
			i++;
	}
	return (words);
}
