#include "main.h"

/**
 * print_rev - of string
 * @s: string
 * return nothing
 */

void print_rev(char *s)
{
	int len, i;

	for (i = 0; s[i]; i++)
		;
	for (len = i - 1; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
