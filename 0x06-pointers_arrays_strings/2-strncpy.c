#include "main.h"

/**
 * *_strncpy - copy function
 * @dest: string to be copied into
 * @src: source string
 * @n: n byte of source string parameter
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;
	char *temp = dest;

	while (src[a] != '\0')
	{
		if (a < n)
		{
			a++;
		}
		else
		{
			break;
		}
	}
	while (1)
	{
		if (b < a)
		{
			dest[b] = src[b];
		}
		else
		{
			dest[b] = temp[c];
			if (temp[c] == '\0')
			{
				break;
			}
		}
		b++;
		c++;
	}
	dest[b] = '\0';
	return (dest);
}
