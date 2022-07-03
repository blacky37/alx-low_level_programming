#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * _strdup - function returns pointer to a newly allocated space memory
  * @str: the string to duplicate
  * Return: return NULL or the pointer to the duplicate string
  */

char *_strdup(char *str)
{
	char *s;
	int i, a = 0;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	s = malloc(sizeof(char) * a);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		s[i] = str[i];
	}
	return (s);

}
