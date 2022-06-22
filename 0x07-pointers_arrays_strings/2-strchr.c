#include "main.h"

/**
  * _strchr - function that locates a character in a string..
  * @s: the pointer to char.
  * @c: the character to locate in the string.
  * Return: *s.
  */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

return (0);

}
