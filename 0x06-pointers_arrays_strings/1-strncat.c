#include "main.h"
/**
 * _strncat - string cat
 * @dest: destnation
 * @src: src
 * @n: integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
