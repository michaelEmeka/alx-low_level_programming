#include "main.h"

/*
 * string_nconcat - this function concatenates n bytes of string
 * @s1: reference string.
 * @s2: string to be concatenated from.
 * @n: n bytes from s2 to be added.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int i = 0, k = 0, l = 0, N;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[l])
		l++;
	if (n > l)
		n = l;
	N = k + n;
	temp = malloc(1 + N);
	if (!temp)
		return (NULL);
	while (*s1)
	{
		temp[i] = *s1++;
		i++;
	}
	while (*s2 && n > 0)
	{
		temp[i] = *s2++;
		i++, n--;
	}
	temp[i] = '\0';
	return (temp);
}
