#include "main.h"

/**
 * rev_string - main function
 * @s: string to be reversed
 * Return: Always 0;
 */
void rev_string(char *s)
{
	int a, c, b;
	char rev[50];

	for (a = 0; s[a] != '\0'; a++)
	{
		b = a;
	}
	for (c = 0; c < a; c++)
	{
		rev[c] = s[b];
		b--;
	}
	for (c = 0; rev[c] != '\0'; c++)
	{
		s[c] = rev[c];
	}
}
