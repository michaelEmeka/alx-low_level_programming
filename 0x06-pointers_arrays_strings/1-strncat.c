#include "main.h"

/**
 * *strncat - main function
 * @dest: first argument
 * @src: second arg
 * @n: nbytes argument
 * Return: 0 always
 */
char *strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		if (b <= n)
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
