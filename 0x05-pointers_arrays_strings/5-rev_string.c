#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * rev_string - function that reverses a string.
  * @s: string to reverse
  * Return: void
  */

void rev_string(char *s)
{

	int length = 0, i = 0;

	length = strlen(s);

	char temp[1];

	for (i = 0; i < length / 2; i++)
	{
		*temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = *temp;
	}

}
