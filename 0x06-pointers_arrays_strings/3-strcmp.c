#include "main.h"
/**
 *  _strcmp - compare
 *  @s1: destnation
 *  @s2: source
 *  Return: 0
 */
int _strcmp(char *s1, char *s2)

{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] > s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return 0;
}
