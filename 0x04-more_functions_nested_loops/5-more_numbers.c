#include "main.h"
/**
 * main - print 14 times
 * Return: Always 0 (Sucess)
 */
void more_numbers(void)

{
	int j;
	int c;

	for (j = 0; j < 14; j++)
	{
		for (c = 1; c <= 14; c++)
		{
		_putchar(c);
		}
	}
_putchar('\n');
}
