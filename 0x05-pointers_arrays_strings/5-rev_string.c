#include "main.h"

/**
 * rev_string - main function
 * @s: string to be reversed
 * Return: Always 0;
 */
void rev_string(char *s)
{
	int a, c, b;
	char rev[];

	for (a = 0; s[a] != '\0'; a++)
	{
		b = a;
	}
	for (c = 0; c < b; c++)
	{
		rev[c] = s[a];
		a--;
	}
	*s = rev;
}
