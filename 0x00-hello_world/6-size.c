#include <stdio.h>
/**
 * main - A program that print the sizes of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an float: %lu byte(s)\n", (unsigned long)size (f));
