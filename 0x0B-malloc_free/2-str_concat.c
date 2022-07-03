#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * str_concat - concatenate two strings.
  * @s1: first string
  * @s2: second string
  * Return: NULL or a pointer.
  */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, a1 = 0, a2 = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");

	if (s1 == NULL && s2 != NULL)
	{
		while (s2[a2] != '\0')
			a2++;
		s = malloc(sizeof(char) * (a2 + 1));
		if (s == NULL)
			return (NULL);
		for (i = 0; i < a2; i++)
		{
			s[i] = s2[i];
		}
	}

	if (s1 != NULL && s2 == NULL)
	{
		while (s1[a1] != '\0')
			a1++;
		s = malloc(sizeof(char) * (a1 + 1));
		if (s == NULL)
			return (NULL);
		for (i = 0; i < a1; i++)
		{
			s[i] = s1[i];
		}
	}

	if (s1 != NULL && s2 != NULL)
	{
		while (s1[a1] != '\0')
			a1++;
		while (s2[a2] != '\0')
			a2++;
		s = malloc(sizeof(char) * (a1 + a2 + 1));
		if (s == NULL)
			return (NULL);
		for (i = 0; i < a1; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < a2; j++)
		{
			s[i + j] = s2[j];
		}

	}
	return (s);

}
