#include "main.h"
/**
 * _isalpha - print lower and upper case
 * @c: c is lower or upper
 * Return: Always 0 (Success)
 */
int _isalpha(int c)

{
	if ((c <= 'a' && c >= 'z') || (c <='A' && c >= 'Z'))
	{
		return(1);
	}
	else
	{
		return (0);
		}
	_putchar('\n');
}
