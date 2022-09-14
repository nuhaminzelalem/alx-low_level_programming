#include "main.h"
/**
 * _abs - print the absolut value of an intger
 * @n: absolut value of a number
 * Return: Always 0 (Success)
 */
int _abs(int n)

{
	int abso;

	if (n < 0)
	{
		abso = n * -1;
		_putchar(abso);
	}
	else
	{
		abso = n * 1;
		_putchar(n);
	}
	_putchar('\n');
	return (abso);
}
