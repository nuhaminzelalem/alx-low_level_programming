#include "main.h"
/**
* main - print except 2 and 4
* Return: Alwaays 0 (Success)
*/
void print_most_numbers(void)

{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
