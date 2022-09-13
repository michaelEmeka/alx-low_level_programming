#include "main.h"

/**
 * set_string - this fumction sets a string located in s
 * pointer to a pointer to @to argument.
 * Description: it does this by accessing the location of
 * string directly since @s is a pointer to the string
 * so there'd be no need of returning anything.
 * @s: pointer to the string pointer.
 * @to: string pointer(passed by value).
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
