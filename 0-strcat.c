#include "main.h"
/**
 * _strcat - concatnet
 * @s1: var1
 * @s2: var2
 * Return: 0
 */
char _strcat(char *dest, char *src)

{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];	
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
