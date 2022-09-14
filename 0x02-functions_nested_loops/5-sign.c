#include "main.h"
/**
 *  print_sign - print + 0 -
 *  @n: print + 0 -
 *  Return: Always 0  (Success)
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
