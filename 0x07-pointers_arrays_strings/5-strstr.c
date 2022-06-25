#include "main.h"
#include <stddef.h>

/**
  * _strstr - function that locates a substring.
  * @haystack: the initial string.
  * @needle: the substring.
  * Return: the pointer to the beginning of the located substring.
  */

char *_strstr(char *haystack, char *needle)
{
	char *s;
	char *p;
	char *tmp;

	s = haystack;
	p = needle;

	while (*s != '\0')
	{
		if (*s != *p)
		{
			s++;
		}
		else
		{
			tmp = s;
			while (*s != '\0' && *p != '\0' && *s == *p)
			{
				s++;
				p++;
			}
			if (*p == '\0')
			{
				return (tmp);
			}
			else
			{
				s = tmp + 1;
				p = needle;
			}
		}
	}
	return (NULL);
}
