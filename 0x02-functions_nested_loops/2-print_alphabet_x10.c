#include "main.h"
/**
 *  print_alphabet_x10 - print lowercase alphabet 10 times
 *  Return: Always 0 (Success)
 */
void print_alphabet_x10(void)

{
	char put[]="abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j = 1;
	for (j = 1; j <= 10; j++)
	{

			for (i = 0;i < 26;i++)
			{
				_putchar put[i];
			}

	}
	_putchar('\n');
}

