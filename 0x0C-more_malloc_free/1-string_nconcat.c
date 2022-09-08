#include "main.h"

/*
 * string_nconcat - this function concatenates n bytes of string
 * @s1: reference string.
 * @s2: string to be concatenated from.
 * @n: n bytes from s2 to be added.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp = malloc(sizeof(char*));
	int i = 0;
	while (*s1 || (n > 0 && *s2))
	{
		if (*s1)
			temp[i] = *s1++;
		else
		{
			temp[i] = *s2++;
			n--;
		}
		i++;
	}
	return (temp);
}
