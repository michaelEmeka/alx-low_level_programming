#include <unistd.h>

/**
 * _putchar - this function outputs a character
 * @c: character argument
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
