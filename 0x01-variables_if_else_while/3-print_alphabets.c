#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: 0 for success otherwise 1
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}

