#include "main.h"
/**
 * _abs - print the absolut value of an intger
 * @n: absolut value of a number
 * Return: Always 0 (Success)
 */
int _abs(int n)

{
	if (n < 1)
	{
		_putchar(n*(-1));
	}
	else
	{
		_putchar(n*1);
	}
	_putchar('\n');
}
