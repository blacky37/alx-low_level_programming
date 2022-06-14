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
	int i, len, temp;

	len = strlen(s);

	if (i < len/2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++
		revstr(s);
	}
/*
	int i, j, k;
	char *p, temp;

	p = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		p++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		temp = s[i];
		s[i] = *p;
		*p = temp;
		p--;
	}
*/
}
