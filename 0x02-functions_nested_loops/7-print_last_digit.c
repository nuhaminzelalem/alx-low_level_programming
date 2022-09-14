#include "main.h"
/**
 * print_last_digit - print last digit
 * @a: last digit of a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)

{
	int b;
	b = a % 10;

	if (a < 0)
	{
		b = -1 * b;
		_putchar(b + '0');
		return (b);
	}
	else 
	{
		b = b;
		_putchar(b + '0');
		return (b);
	}
	_putchar ('\n');
}
	
