#include "main.h"
/**
 * _isalpha - print lower and upper case
 * @c: c is lower or upper
 * Return: Always 0 (Success)
 */
int _isalpha(int c)

{
	if ((c <= 'a') || (c >= 'z') && (c <='A') || (C >= 'Z'))
	{
		return(1);
	}
	_putchar('\n');
}
