#include <stdio.h>

/**
 * main - a program that print letters in the alphabets in lower and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; 1 < 52; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
