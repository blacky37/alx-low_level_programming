#include "main.h"

/**
  * _strspn - function that gets thr length of a prefix suubstring.
  * @s: the initial string.
  * @accept: accepted string..
  * Return: number of bytes in the init segment.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, b, n = 0;

	while (accept[i])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[i] == s[b])
			{
				n++;
			}

			b++;
		}

		i++;
	}

	return (n);
}
