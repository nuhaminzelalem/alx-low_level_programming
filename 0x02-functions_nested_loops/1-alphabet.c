#include "main.h"
/**
 * print_alphabet - print lower alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char put[] = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < 26; i++)
	{
		_putchar(put[i]);

	}
	_putchar('\n');
	return (0);
}
