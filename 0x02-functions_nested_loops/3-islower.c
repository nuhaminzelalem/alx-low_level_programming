#include "main.h"
/**
 * int _islower - print 1 if c is lowercase 0 if c is uppercase
 * Return: Always 0 (Success)
 */
int _islower(int c)

{
	if ( c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
