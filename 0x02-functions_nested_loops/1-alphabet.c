#include "main.h"
/**
  * print_alphabet - Print alphabet in lowercase followed by a new line
  * Return: Always 0
  */

int print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');

	return (0);
}
