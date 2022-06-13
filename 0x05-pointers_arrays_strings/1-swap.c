#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: an integer
  * @b: another integer
  * Return: void.
  */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	
	*a = *b;

	*b = p;
}
