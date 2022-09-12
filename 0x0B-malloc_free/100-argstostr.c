#include "main.h"

/**
 * argstostr - this function concatenates all arguments by
 * adding \n to each.
 * @ac: argc.
 * @av: argument vector.
 * Return: a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int str = 1, i = 0, t = 0, letterCount = 0, buffSize;
	char *buffer, *temp;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (str < ac)
	{
		while (av[str][i++])
			letterCount++;
		str++;
		i = 0;
	}
	buffSize = letterCount + ac;
	str = 1;
	buffer = malloc(buffSize);
	if (!Buffer)
		return (NULL);
	while (str < ac)
	{
		while (av[str][i])
		{
			buffer[t++] = av[str][i++];
		}
		buffer[t] = '\n';
		str++;
	}
	buffer[t] = '\0';
	return (buffer);
}
