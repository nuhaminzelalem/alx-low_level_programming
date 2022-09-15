#include "main.h"
/**
 * _isupper - print  uppercase character
 * @c: check upper case character
 * Return: Always 0 (Success)
 */
int _isupper(int c)

{
	if (c >= 'A') || (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
