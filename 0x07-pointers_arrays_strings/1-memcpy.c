#include "main.h"

/**
  * _memcpy - function that copies memory area.
  * @src: The source memory area.
  * @dest: The destination memory area.
  * @n: bytes to copy.
  * Return: returns a pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
