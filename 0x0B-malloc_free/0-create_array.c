#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: the size of the array
  * @c: the specific char to initializes array with
  * Return: NULL if size = 0, otherwise the pointer
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
