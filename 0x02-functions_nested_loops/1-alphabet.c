#include "main.h"
/**
  * main - Print alphabet in lowercase followed by a new line
  * Return: Always 0
  */

int main(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');

	return (0);
}
