#include "main.h"
/**
 * _strlen - check the lenght of the string
 * @s:- string to be checked
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
