#include "main.h"
/**
 * puts2 - the function prints the string each character on a line
 * @str: this is the used string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int  z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
