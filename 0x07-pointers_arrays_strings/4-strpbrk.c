#include "main.h"

/**
  * _strpbrk - function that searches a string for any of a set of bytes.
  * @s: the initial string.
  * @accept: the accepted string.
  * Return: Returns a pointer to the byte in s that matches.
  */

char *_strpbrk(char *s, char *accept)
{
	char *a = s;
	char *p;

	while (*a != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*a == *p)
			{
				return (a);
			}
			p++;
		}
		a++;
	}

	return (NULL);

}
