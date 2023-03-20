#include <stdio.h>
/**
 * main- A program that prints letters in alphabets in lowercase
 *
 * Return: 0 (Success)
 */
/** this program prints the letters in the alphabet in lowercase */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
