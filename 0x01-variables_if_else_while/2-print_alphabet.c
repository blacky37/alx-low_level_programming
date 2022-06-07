#include <stdio.h>
 /**
 * main - Prints alphabet
 * Return: return 0 for success otherwise 1
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
