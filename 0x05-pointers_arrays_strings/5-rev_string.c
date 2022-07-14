#include "main.h"

/**
 * rev_string - main function
 * @s: string to be reversed
 * Return: Always 0;
 */
void rev_string(char *s)
{
	int a, c, b;
	char r, w;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	c = a - 1;
	b = 0;
	while (c > b)
	{
		r = s[b];
		w = s[c];
		s[b] = w;
		s[c] = r;
		c--;
		b++;
	}
}
