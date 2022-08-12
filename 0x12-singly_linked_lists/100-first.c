#include <stdio.h>

/**
 * startupFunc - this function is executed before main
 *
 * Return: nothing
 */
void startupFunc (void) __attribute__ ((constructor));
void startupFunc()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
