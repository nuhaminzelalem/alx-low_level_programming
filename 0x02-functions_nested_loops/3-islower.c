#include "main.h"
/**
 * _islower - print 1 if c is lowercase 0 if c is uppercase
 * @c: c may be upper or lower
 * Return: Always 0 (Success)
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
