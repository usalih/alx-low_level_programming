#include "main.h"
/**
 * print_rev - function that print string in reverse.
 * @s: This is the used string to refrence pointer
 * return : 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
