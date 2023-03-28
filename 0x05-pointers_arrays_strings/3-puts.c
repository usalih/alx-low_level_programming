#include"main.h"
/**
 *_puts - the function print a string follow by a new line
 *@str:- pointer to the string
 * return : string and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
