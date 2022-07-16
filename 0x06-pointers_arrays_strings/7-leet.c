#include "main.h"

/**
 * *leet - encoding function
 * @str: striing parameter
 * Return: encoded string
 */
char *leet(char *str)
{
	int a = 0, i = 0;
	char key[5] = {'a', 'e', 'o', 't', 'l'};
	char val[5] = {'4', '3', '0', '7', '1'};

	while (str[a] != '\0')
	{
		while (i < 5)
		{
			if (str[a] == key[i] || str[a] == key[i] - 32)
			{
				str[a] = val[i];
			}
			i++;
		}
		i = 0;
		a++;
	}
	return (str);
}
