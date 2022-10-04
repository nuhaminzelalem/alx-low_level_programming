#include "main.h"
#include <stdlib.h>
/**
 * create_array - malloc
 * @size: unsigned int
 * @c: int
 * Return: 0
 */
char *create_array(unsigned int size, char c)

{
	unsigned int i;

	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (ptr == 0)
			return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
	}
}
