#include "main.h"
/**
 *swap_int:- takes in two integers and swap the values of them
 *
 * @a:- this is the first parameter
 * @b:- this is the second parameter
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
