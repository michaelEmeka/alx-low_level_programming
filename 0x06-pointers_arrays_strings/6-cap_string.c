#include "main.h"

/**
 * *cap_string - this function capitalizes the first letters of words
 * @str: string parameter
 * Return: 0
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || str[i] == ' ' || str[i] == '.' || str[i] == 9 || str[i] == 10)
		{
			if (i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
			else
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	i++;
	}
	return (str);
}
