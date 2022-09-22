#include "main.h"
/**
 * _strncpy - string copy
 * @dest: destnation
 * @src: source
 * @n: number
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src [i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (n >= i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
